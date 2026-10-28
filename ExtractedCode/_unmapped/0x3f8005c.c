// rea decompile_all
// name: FUN_03f8005c
// address: 0x3f8005c
// body: available
// range: 0x3f8005c-0x3f8047b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f8005c(void)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  pthread_t pVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  
  FUN_03faf580();
LAB_03f8009c:
  FUN_03f5c2c8(1);
  uVar15 = 0;
  iVar8 = 500;
  while (uVar9 = FUN_03fbc984(), (uVar9 & 1) == 0) {
    iVar6 = FUN_03f8f428();
    FUN_03fafc80(iVar8);
    iVar7 = FUN_03f8f428();
    iVar8 = (iVar6 - iVar7) + iVar8;
    FUN_03f5c2c8(0);
    FUN_03f5c2c8(1);
    if ((iVar8 < 1) || (bVar2 = 8 < uVar15, uVar15 = uVar15 + 1, bVar2)) break;
  }
  FUN_03f5c2c8(0);
  if ((*(char *)(DAT_09534880 + 0x284) == '\0') &&
     (uVar9 = FUN_03fbc984(), lVar13 = DAT_09534880, (uVar9 & 1) == 0)) {
    pVar10 = pthread_self();
    if (pVar10 == *(pthread_t *)(lVar13 + 0x60)) {
      *(int *)(lVar13 + 0x68) = *(int *)(lVar13 + 0x68) + 1;
    }
    else {
      uVar11 = 0;
      do {
        iVar8 = (int)uVar11;
        uVar11 = FUN_0404bd00(uVar11,iVar8 + 1,lVar13 + 0x20);
        iVar6 = (int)uVar11;
        if (iVar6 == iVar8) break;
      } while (iVar6 != 2);
      while (iVar6 != 0) {
        FUN_03fe02a8(lVar13 + 0x20,2,0xffffffff);
        iVar6 = FUN_0404be70(2,lVar13 + 0x20);
      }
      *(pthread_t *)(lVar13 + 0x60) = pVar10;
    }
    lVar1 = DAT_09534880;
    lVar13 = *(long *)(DAT_09534880 + 0x10) - *(long *)(DAT_09534880 + 8);
    if (lVar13 != 0) {
      uVar9 = 0;
      uVar15 = 1;
      do {
        if (0 < *(int *)(*(long *)(*(long *)(DAT_09534880 + 8) + uVar9 * 8) + 8)) {
          if (*(int *)(DAT_09534880 + 0x68) == 0) {
            lVar13 = DAT_09534880 + 0x20;
            *(undefined8 *)(DAT_09534880 + 0x60) = 0;
            iVar8 = FUN_0404bea0(0,lVar13);
            if (iVar8 == 2) {
              FUN_03fe0300(lVar1 + 0x20,1,0);
            }
          }
          else {
            *(int *)(DAT_09534880 + 0x68) = *(int *)(DAT_09534880 + 0x68) + -1;
          }
          *(undefined4 *)(DAT_09534880 + 0x280) = 0x50;
          sVar5 = FUN_0404c080(0);
          DataMemoryBarrier(2,3);
          uVar9 = FUN_03f8f428();
          if (*(long *)(DAT_09534880 + 0x148) + (long)(sVar5 * 1000) <= (long)(uVar9 & 0xffffffff))
          goto LAB_03f80290;
          goto LAB_03f8024c;
        }
        uVar12 = (ulong)uVar15;
        uVar9 = (ulong)uVar15;
        uVar15 = uVar15 + 1;
      } while (uVar12 < (ulong)(lVar13 >> 3));
    }
    if (*(int *)(DAT_09534880 + 0x68) == 0) {
      lVar13 = DAT_09534880 + 0x20;
      *(undefined8 *)(DAT_09534880 + 0x60) = 0;
      iVar8 = FUN_0404bea0(0,lVar13);
      if (iVar8 == 2) {
        FUN_03fe0300(lVar1 + 0x20,1,0);
      }
    }
    else {
      *(int *)(DAT_09534880 + 0x68) = *(int *)(DAT_09534880 + 0x68) + -1;
    }
  }
  goto LAB_03f8024c;
  while( true ) {
    uVar14 = (ulong)((int)uVar9 + 1);
    uVar12 = FUN_0404be00(uVar9,uVar9 & 0xffffffffffff0000 | uVar14 & 0xffff);
    DataMemoryBarrier(2,3);
    if (uVar12 == uVar9) break;
LAB_03f80290:
    uVar9 = FUN_0404c080(0,DAT_09534880);
    DataMemoryBarrier(2,3);
    if (*(int *)(DAT_09534880 + 0x26c) <= (int)(short)uVar9) goto LAB_03f8024c;
  }
  FUN_03f814b4(uVar14);
  uVar15 = 0;
  do {
    uVar9 = FUN_03fbc984();
    if ((((uVar9 & 1) != 0) || (uVar9 = FUN_03f81378(), (uVar9 & 1) != 0)) ||
       (uVar9 = FUN_03f8047c(), (uVar9 & 1) != 0)) break;
    bVar2 = uVar15 < 4;
    uVar15 = uVar15 + 1;
  } while (bVar2);
LAB_03f8024c:
  iVar8 = FUN_0404bed0(1,&DAT_09515568);
  DataMemoryBarrier(2,3);
  if (iVar8 != 1) goto LAB_03f8009c;
  uVar9 = FUN_03fbc984();
  lVar13 = DAT_09534880;
  if ((uVar9 & 1) == 0) {
    pVar10 = pthread_self();
    if (pVar10 == *(pthread_t *)(lVar13 + 0x60)) {
      *(int *)(lVar13 + 0x68) = *(int *)(lVar13 + 0x68) + 1;
    }
    else {
      uVar11 = 0;
      do {
        iVar8 = (int)uVar11;
        uVar11 = FUN_0404bd00(uVar11,iVar8 + 1,lVar13 + 0x20);
        iVar6 = (int)uVar11;
        if (iVar6 == iVar8) break;
      } while (iVar6 != 2);
      while (iVar6 != 0) {
        FUN_03fe02a8(lVar13 + 0x20,2,0xffffffff);
        iVar6 = FUN_0404be70(2,lVar13 + 0x20);
      }
      *(pthread_t *)(lVar13 + 0x60) = pVar10;
    }
    lVar1 = DAT_09534880;
    lVar13 = *(long *)(DAT_09534880 + 0x10) - *(long *)(DAT_09534880 + 8);
    if (lVar13 == 0) {
      bVar2 = false;
    }
    else {
      uVar14 = lVar13 >> 3;
      uVar9 = 0;
      uVar12 = 1;
      do {
        iVar8 = *(int *)(*(long *)(*(long *)(DAT_09534880 + 8) + uVar9 * 8) + 8);
        bVar2 = 0 < iVar8;
        bVar3 = uVar12 <= uVar14;
        bVar4 = uVar14 != uVar12;
        uVar9 = uVar12;
        uVar12 = (ulong)((int)uVar12 + 1);
      } while ((iVar8 < 1 && bVar3) && (0 < iVar8 || bVar4));
    }
    if (*(int *)(DAT_09534880 + 0x68) == 0) {
      lVar13 = DAT_09534880 + 0x20;
      *(undefined8 *)(DAT_09534880 + 0x60) = 0;
      iVar8 = FUN_0404bea0(0,lVar13);
      if (iVar8 == 2) {
        FUN_03fe0300(lVar1 + 0x20,1,0);
      }
    }
    else {
      *(int *)(DAT_09534880 + 0x68) = *(int *)(DAT_09534880 + 0x68) + -1;
    }
    if (lRam0000000009515570 == -1) {
      bVar2 = true;
    }
    if (!bVar2) {
      lVar13 = FUN_03f8f488();
      if (599999999 < lVar13 - lRam0000000009515570) goto LAB_03f8026c;
      if (lRam0000000009515570 != -1) goto LAB_03f8009c;
    }
    lRam0000000009515570 = FUN_03f8f488();
    goto LAB_03f8009c;
  }
LAB_03f8026c:
  lRam0000000009515570 = -1;
  iVar8 = FUN_0404bd80(1,2,&DAT_09515568);
  DataMemoryBarrier(2,3);
  if (iVar8 == 1) {
    return;
  }
  goto LAB_03f8009c;
}

