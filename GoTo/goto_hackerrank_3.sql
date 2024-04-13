SELECT BUYER_ID, sum(p.price)
FROM house h
    INNER JOIN price p
        ON h.HOUSE_ID = p.HOUSE_ID
GROUP BY BUYER_ID
HAVING count(BUYER_ID) > 1 AND sum(p.price) > 100