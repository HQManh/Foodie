// rea decompile_all
// name: TrungKien.UI.NewFearther.UIPopupNewFeather$$BuildNewObstacleDict
// address: 0x408ad84
// body: available
// range: 0x408ad84-0x408b10f inclusive
// range: 0x408b114-0x408b117 inclusive
// range: 0x408b11c-0x408b11f inclusive
// range: 0x408b168-0x408b1d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408b10c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408b114 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408b11c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408b1cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408b1d4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0408b0a4) */

void TrungKien_UI_NewFearther_UIPopupNewFeather__BuildNewObstacleDict(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long local_98;
  long *plStack_90;
  undefined8 local_88;
  long local_80;
  long *plStack_78;
  undefined8 local_70;
  
  if ((DAT_09515cb9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f218);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a8698);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091b4ab0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c470);
    DAT_09515cb9 = 1;
  }
  local_80 = 0;
  plStack_78 = (long *)0x0;
  local_70 = 0;
  if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((*(char *)(*(long *)(DAT_0918c470 + 0xb8) + 0x10) == '\0') &&
     (uVar5 = FUN_05a8eda4(DAT_091b4ab0), (uVar5 & 1) != 0)) {
    lVar6 = thunk_FUN_03f9944c(DAT_09179ee0);
    FUN_053eb530(lVar6,DAT_091a8698);
    if (param_1 == 0) {
LAB_0408b1cc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(param_1,0);
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        lVar7 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO(param_1,iVar3,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar5 = UnityEngine_Object__op_Equality(lVar7,0,0);
        if ((uVar5 & 1) == 0) {
          if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar7 == 0) goto LAB_0408b1cc;
          iVar12 = *(int *)(lVar7 + 0x4c);
          iVar1 = *(int *)(lVar7 + 0x50);
          iVar4 = iVar1;
          if (iVar12 <= iVar1) {
            iVar4 = iVar12;
          }
          if (iVar1 < 1) {
            iVar4 = iVar12;
          }
          if (0 < iVar4) {
            iVar12 = 0;
            do {
              lVar8 = TrungKien_UI_NewFearther_NewToolLevelPreview__GetObstacleKeysOfLevel
                                (*(undefined8 *)(lVar7 + 0x18),iVar12);
              if (lVar8 == 0) goto LAB_0408b1cc;
              FUN_057e185c(&local_98,lVar8,DAT_091b05a8);
              local_80 = local_98;
              lVar8 = 0;
              local_98 = 0;
              plStack_78 = plStack_90;
              local_70 = local_88;
              plStack_90 = &local_80;
              while (uVar5 = FUN_071bd28c(&local_80,DAT_091a45a0), uVar10 = local_70,
                    lVar13 = local_98, (uVar5 & 1) != 0) {
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar5 = FUN_053ec72c(lVar6,local_70,DAT_091a86b8);
                if ((uVar5 & 1) != 0) {
                  if (lVar8 == 0) {
                    lVar8 = thunk_FUN_03f9944c(DAT_0917cce8);
                    FUN_057e0400(lVar8,DAT_091b0558);
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                  }
                  lVar13 = DAT_091b0570;
                  lVar11 = *(long *)(lVar8 + 0x10);
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar2 = *(uint *)(lVar8 + 0x18);
                  if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                    puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                    *puVar9 = uVar10;
                    thunk_FUN_03f5d7b8(puVar9,uVar10);
                  }
                  else {
                    FUN_057e0c68(lVar8,uVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
              }
              FUN_071bd288(plStack_90,DAT_091a4598);
              if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c548(lVar13);
              }
              if (lVar8 != 0) {
                if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar13 = *(long *)(*(long *)(DAT_0918c470 + 0xb8) + 8);
                uVar10 = TrungKien_UI_NewFearther_UIPopupNewFeather__NewToolKey
                                   (*(undefined8 *)(lVar7 + 0x18),iVar12);
                if (lVar13 == 0) goto LAB_0408b1cc;
                FUN_06fd8440(lVar13,uVar10,lVar8,DAT_0919f218);
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 != iVar4);
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(param_1,0);
      } while (iVar3 < iVar4);
    }
    if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(undefined1 *)(*(long *)(DAT_0918c470 + 0xb8) + 0x10) = 1;
  }
  return;
}

