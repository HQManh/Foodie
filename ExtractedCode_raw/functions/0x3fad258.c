// rea decompile_all
// name: FUN_03fad258
// address: 0x3fad258
// body: available
// range: 0x3fad258-0x3fad833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_03fad258(void)

{
  undefined8 ****ppppuVar1;
  undefined8 ******ppppppuVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulong uVar10;
  void *pvVar11;
  void *__dest;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  undefined8 ******ppppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 ******ppppppuVar18;
  long lVar19;
  undefined8 *****pppppuVar20;
  long lVar21;
  undefined8 *****pppppuVar22;
  undefined8 ******ppppppuVar23;
  undefined8 *****pppppuVar24;
  long lVar25;
  uint uVar26;
  undefined8 ******ppppppuVar27;
  uint *puVar28;
  ulong local_98;
  ulong local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 *****local_78;
  undefined8 *****local_70;
  ulong local_68;
  
  piVar8 = calloc(1,0x60);
  local_80 = (undefined8 *****)((ulong)local_80._4_4_ << 0x20);
  local_70 = (undefined8 ******)0x0;
  local_68 = 0;
  local_78 = &local_70;
  puVar9 = (undefined8 *)FUN_03f98698();
  puVar14 = (undefined8 *)puVar9[1];
  for (puVar12 = (undefined8 *)*puVar9; puVar12 != puVar14; puVar12 = puVar12 + 1) {
    lVar25 = *(long *)*puVar12;
    if (*(int *)(lVar25 + 0x18) != 0) {
      uVar26 = 0;
      do {
        thunk_FUN_03fab57c(lVar25,uVar26);
        uVar10 = FUN_03fc384c();
        if ((*(ushort *)(uVar10 + 0x135) >> 1 & 1) != 0) {
          local_90 = (ulong)local_80 & 0xffffffff;
          local_80 = (undefined8 *****)CONCAT44(local_80._4_4_,(int)local_80 + 1);
          local_98 = uVar10;
          FUN_03fb0020(&local_78,&local_98,&local_98);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < *(uint *)(lVar25 + 0x18));
      puVar14 = (undefined8 *)puVar9[1];
    }
  }
  FUN_03f7ae84(&UNK_03faffe0,&local_80);
  FUN_03f7ad50(&UNK_03faffe0,&local_80);
  FUN_03f77870(&UNK_03faffe0,&local_80);
  FUN_03fc39dc(&UNK_03faffe0,&local_80);
  piVar8[8] = (int)local_68;
  pvVar11 = calloc(local_68 & 0xffffffff,0x48);
  *(void **)(piVar8 + 10) = pvVar11;
  if ((undefined8 ******)local_78 != &local_70) {
    ppppppuVar17 = (undefined8 ******)local_78;
    do {
      uVar26 = *(uint *)(ppppppuVar17 + 5);
      pppppuVar24 = ppppppuVar17[4];
      lVar25 = *(long *)(piVar8 + 10);
      puVar15 = (uint *)(lVar25 + (ulong)uVar26 * 0x48);
      if (*(byte *)((long)pppppuVar24 + 0x132) == 0) {
        uVar3 = *(uint *)(pppppuVar24 + 5);
        puVar28 = (uint *)(lVar25 + (ulong)uVar26 * 0x48 + 0x10);
        *puVar28 = 0;
        *puVar15 = (uint)((int)uVar3 < 0 || (uVar3 & 0xff0000) == 0xf0000);
        if ((ulong)*(ushort *)((long)pppppuVar24 + 0x124) != 0) {
          pvVar11 = calloc((ulong)*(ushort *)((long)pppppuVar24 + 0x124),0x18);
          *(void **)(lVar25 + (ulong)uVar26 * 0x48 + 8) = pvVar11;
          if (*(short *)((long)pppppuVar24 + 0x124) != 0) {
            uVar10 = 0;
            do {
              uVar3 = *puVar28;
              ppppuVar1 = pppppuVar24[0x10] + uVar10 * 4;
              lVar19 = *(long *)(*(long *)(piVar8 + 10) + (ulong)uVar26 * 0x48 + 8);
              pppppuVar22 = (undefined8 *****)FUN_03fbe574(ppppuVar1[1],1);
              if ((undefined8 ******)local_70 == (undefined8 ******)0x0) {
LAB_03fad4ec:
                *(undefined4 *)(lVar19 + (ulong)uVar3 * 0x18 + 4) = 0xffffffff;
              }
              else {
                ppppppuVar27 = (undefined8 ******)local_70;
                ppppppuVar2 = &local_70;
                do {
                  ppppppuVar23 = ppppppuVar2;
                  ppppppuVar16 = ppppppuVar27;
                  pppppuVar20 = ppppppuVar16[4];
                  ppppppuVar2 = ppppppuVar23;
                  ppppppuVar18 = ppppppuVar16 + 1;
                  if (pppppuVar22 <= pppppuVar20) {
                    ppppppuVar2 = ppppppuVar16;
                    ppppppuVar18 = ppppppuVar16;
                  }
                  ppppppuVar27 = (undefined8 ******)*ppppppuVar18;
                } while ((undefined8 ******)*ppppppuVar18 != (undefined8 ******)0x0);
                if (ppppppuVar2 == &local_70) goto LAB_03fad4ec;
                ppppppuVar2 = ppppppuVar23;
                if (pppppuVar22 <= pppppuVar20) {
                  ppppppuVar2 = ppppppuVar16;
                }
                if (pppppuVar22 < ppppppuVar2[4]) goto LAB_03fad4ec;
                if (pppppuVar22 <= pppppuVar20) {
                  ppppppuVar23 = ppppppuVar16;
                }
                iVar5 = *(int *)(ppppppuVar23 + 5);
                *(int *)(lVar19 + (ulong)uVar3 * 0x18 + 4) = iVar5;
                if ((iVar5 != -1) && (uVar4 = *(uint *)(ppppuVar1[1] + 1), (uVar4 >> 6 & 1) == 0)) {
                  lVar21 = lVar19 + (ulong)uVar3 * 0x18;
                  *(byte *)(lVar21 + 0x10) = (byte)(uVar4 >> 4) & 1;
                  *(undefined4 *)(lVar19 + (ulong)uVar3 * 0x18) = *(undefined4 *)(ppppuVar1 + 3);
                  *(undefined8 ****)(lVar21 + 8) = *ppppuVar1;
                  *puVar28 = *puVar28 + 1;
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(ushort *)((long)pppppuVar24 + 0x124));
          }
        }
        uVar3 = *(uint *)((long)pppppuVar24 + 0x10c);
        puVar15 = (uint *)(lVar25 + (ulong)uVar26 * 0x48 + 0x14);
        *puVar15 = uVar3;
        if ((uVar3 != 0) && (pppppuVar24[0x17] != (undefined8 ****)0x0)) {
          pvVar11 = malloc((ulong)uVar3);
          uVar3 = *puVar15;
          *(void **)(lVar25 + (ulong)uVar26 * 0x48 + 0x18) = pvVar11;
          memcpy(pvVar11,pppppuVar24[0x17],(ulong)uVar3);
        }
        pppppuVar22 = (undefined8 *****)FUN_03fbf154(pppppuVar24);
        uVar13 = 0xffffffff;
        if ((pppppuVar22 != (undefined8 *****)0x0) &&
           (ppppppuVar2 = &local_70, ppppppuVar27 = (undefined8 ******)local_70,
           (undefined8 ******)local_70 != (undefined8 ******)0x0)) {
          do {
            ppppppuVar16 = ppppppuVar27;
            ppppppuVar18 = ppppppuVar2;
            bVar6 = ppppppuVar16[4] < pppppuVar22;
            ppppppuVar23 = ppppppuVar16 + 1;
            if (!bVar6) {
              ppppppuVar23 = ppppppuVar16;
            }
            ppppppuVar2 = ppppppuVar18;
            if (!bVar6) {
              ppppppuVar2 = ppppppuVar16;
            }
            ppppppuVar27 = (undefined8 ******)*ppppppuVar23;
          } while ((undefined8 ******)*ppppppuVar23 != (undefined8 ******)0x0);
          if (ppppppuVar2 != &local_70) {
            ppppppuVar2 = ppppppuVar18;
            if (pppppuVar22 <= ppppppuVar16[4]) {
              ppppppuVar2 = ppppppuVar16;
            }
            if (ppppppuVar2[4] <= pppppuVar22) goto LAB_03fad614;
          }
          goto LAB_03fad60c;
        }
      }
      else {
        *puVar15 = (uint)*(byte *)((long)pppppuVar24 + 0x132) << 0x10 | 2;
        if ((undefined8 ******)local_70 != (undefined8 ******)0x0) {
          pppppuVar22 = (undefined8 *****)pppppuVar24[8];
          ppppppuVar2 = &local_70;
          ppppppuVar27 = (undefined8 ******)local_70;
          do {
            ppppppuVar16 = ppppppuVar27;
            ppppppuVar18 = ppppppuVar2;
            bVar6 = ppppppuVar16[4] < pppppuVar22;
            ppppppuVar23 = ppppppuVar16 + 1;
            if (!bVar6) {
              ppppppuVar23 = ppppppuVar16;
            }
            ppppppuVar2 = ppppppuVar18;
            if (!bVar6) {
              ppppppuVar2 = ppppppuVar16;
            }
            ppppppuVar27 = (undefined8 ******)*ppppppuVar23;
          } while ((undefined8 ******)*ppppppuVar23 != (undefined8 ******)0x0);
          if (ppppppuVar2 != &local_70) {
            ppppppuVar2 = ppppppuVar18;
            if (pppppuVar22 <= ppppppuVar16[4]) {
              ppppppuVar2 = ppppppuVar16;
            }
            if (ppppppuVar2[4] <= pppppuVar22) {
LAB_03fad614:
              if (!bVar6) {
                ppppppuVar18 = ppppppuVar16;
              }
              uVar13 = *(undefined4 *)(ppppppuVar18 + 5);
              goto LAB_03fad628;
            }
          }
        }
LAB_03fad60c:
        uVar13 = 0xffffffff;
      }
LAB_03fad628:
      lVar19 = lVar25 + (ulong)uVar26 * 0x48;
      *(undefined4 *)(lVar19 + 0x20) = uVar13;
      *(undefined8 ***)(lVar19 + 0x30) = (*pppppuVar24)[2][3];
      FUN_03fb7b60(&local_98,pppppuVar24 + 4,0);
      uVar10 = local_98 >> 1 & 0x7f;
      if ((local_98 & 1) != 0) {
        uVar10 = local_90;
      }
      __dest = calloc(uVar10 + 1,1);
      lVar25 = lVar25 + (ulong)uVar26 * 0x48;
      *(void **)(lVar25 + 0x28) = __dest;
      uVar10 = local_98 >> 1 & 0x7f;
      pvVar11 = (void *)((ulong)&local_98 | 1);
      if ((local_98 & 1) != 0) {
        uVar10 = local_90;
        pvVar11 = local_88;
      }
      memcpy(__dest,pvVar11,uVar10 + 1);
      *(undefined8 ******)(lVar25 + 0x38) = pppppuVar24;
      iVar5 = *(int *)(pppppuVar24 + 0x1f) + -0x10;
      if (-1 < *(int *)(pppppuVar24 + 5)) {
        iVar5 = *(int *)(pppppuVar24 + 0x1f);
      }
      *(int *)(lVar25 + 0x40) = iVar5;
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      ppppppuVar2 = (undefined8 ******)ppppppuVar17[1];
      ppppppuVar27 = ppppppuVar17;
      if ((undefined8 ******)ppppppuVar17[1] == (undefined8 ******)0x0) {
        do {
          ppppppuVar17 = (undefined8 ******)ppppppuVar27[2];
          bVar6 = (undefined8 ******)*ppppppuVar17 != ppppppuVar27;
          ppppppuVar27 = ppppppuVar17;
        } while (bVar6);
      }
      else {
        do {
          ppppppuVar17 = ppppppuVar2;
          ppppppuVar2 = (undefined8 ******)*ppppppuVar17;
        } while ((undefined8 ******)*ppppppuVar17 != (undefined8 ******)0x0);
      }
    } while (ppppppuVar17 != &local_70);
  }
  FUN_03f723d0(&local_78,local_70);
  do {
    thunk_FUN_03fd69a8(FUN_03fb00d4,piVar8);
    FUN_03f5da70();
    iVar5 = *piVar8;
    iVar7 = FUN_03f5dae4();
    if (iVar5 == iVar7) {
      local_80 = *(undefined8 ******)(piVar8 + 2);
      local_78 = (undefined8 *****)CONCAT71(local_78._1_7_,1);
      FUN_03f5dab0(&local_80,&UNK_03fb0188);
      if ((char)local_78 != '\0') break;
    }
    thunk_FUN_03fd6b48();
    FUN_03fad930(piVar8);
  } while( true );
  local_80 = *(undefined8 ******)(piVar8 + 2);
  FUN_03f5dab0(&local_80,FUN_03fb011c);
  thunk_FUN_03fd6b48();
  local_80 = (undefined8 *****)0x0;
  local_78 = (undefined8 *****)0x0;
  local_70 = (undefined8 *****)0x0;
  FUN_03f5e53c(FUN_03fb01b8,&local_80);
  uVar10 = (long)local_78 - (long)local_80 >> 3;
  piVar8[0xc] = (int)uVar10;
  puVar12 = calloc(uVar10 & 0xffffffff,8);
  uVar10 = (ulong)(uint)piVar8[0xc];
  *(undefined8 **)(piVar8 + 0xe) = puVar12;
  pppppuVar24 = local_80;
  if (piVar8[0xc] == 0) {
    if (local_80 == (undefined8 *****)0x0) goto LAB_03fad7f8;
  }
  else {
    do {
      uVar10 = uVar10 - 1;
      *puVar12 = *pppppuVar24;
      puVar12 = puVar12 + 1;
      pppppuVar24 = pppppuVar24 + 1;
    } while (uVar10 != 0);
  }
  local_78 = local_80;
  operator_delete(local_80);
LAB_03fad7f8:
  piVar8[0x12] = 0x20;
  piVar8[0x13] = 0x10;
  piVar8[0x10] = 8;
  piVar8[0x11] = 0x10;
  piVar8[0x14] = 0x18;
  piVar8[0x15] = 0x10;
  return piVar8;
}

