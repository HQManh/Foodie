// rea decompile_all
// name: AnhPD.FoodOrder.PieceLookup$$PreparedIdsOf
// address: 0x41d9aa0
// body: available
// range: 0x41d9aa0-0x41d9f3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d9f30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d9f34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d9f38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_PieceLookup__PreparedIdsOf(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  ulong local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  long lStack_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_09516aa3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175a88);
    FUN_03f5c2a4(&DAT_091a1f48);
    FUN_03f5c2a4(&DAT_091a1f50);
    FUN_03f5c2a4(&DAT_091a1f58);
    FUN_03f5c2a4(&DAT_091aa9f0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091aaa00);
    FUN_03f5c2a4(&DAT_091aaa08);
    FUN_03f5c2a4(&DAT_091aa9e8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917bb18);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_091ee500);
    FUN_03f5c2a4(&DAT_09193350);
    DAT_09516aa3 = 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  lStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_09193350);
  System_Object___ctor(lVar4,0);
  if (lVar4 == 0) goto LAB_041d9f38;
  plVar11 = (long *)(lVar4 + 0x10);
  *plVar11 = param_2;
  thunk_FUN_03f5d7b8(plVar11,param_2);
  lVar5 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar5,DAT_091b0558);
  uVar6 = AnhPD_FoodOrder_PieceLookup__get_Config();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((param_1[1] != 0 || *param_1 != 0) || param_1[2] != 0) {
      lVar8 = AnhPD_FoodOrder_PieceLookup__get_Config();
      if (lVar8 != 0) {
        lStack_a8 = param_1[1];
        local_b0 = *param_1;
        local_a0 = param_1[2];
        uVar7 = AnhPD_FoodOrder_RecipeConfigSO__TryGetPreparedOfPieceSet
                          (lVar8,&local_b0,&local_48,0);
        lVar8 = DAT_091b0570;
        if ((uVar7 & 1) == 0) {
          lVar8 = thunk_FUN_03f9944c(DAT_0917bb18);
          FUN_056ad834(lVar8,DAT_091aa9e8);
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lStack_68 = param_1[2];
          local_70 = param_1[1];
          local_60 = *param_1;
          local_50 = 0;
          local_58 = 0xffffffff00000000;
          uVar7 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_70);
          if ((uVar7 & 1) != 0) {
            if (lVar8 == 0) goto LAB_041d9f38;
            do {
              lVar2 = DAT_091aa9f0;
              lVar10 = *(long *)(lVar8 + 0x10);
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_041d9f38;
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = local_50;
              }
              else {
                FUN_056ae0c0(lVar8,local_50,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              uVar7 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_70);
            } while ((uVar7 & 1) != 0);
          }
          if (*plVar11 == 0) {
            if (lVar8 != 0) goto LAB_041d9e18;
          }
          else {
            uVar6 = thunk_FUN_03f9944c(DAT_09175a88);
            FUN_06d403e0(uVar6,lVar4,DAT_091ee500,0);
            if (lVar8 != 0) {
              FUN_056afbc8(lVar8,uVar6,DAT_091aaa08);
LAB_041d9e18:
              FUN_056aec8c(&local_c8,lVar8,DAT_091aaa00);
              uStack_88 = puStack_c0;
              local_90 = local_c8;
              local_80 = local_b8;
              local_c8 = 0;
              puStack_c0 = &local_90;
              while( true ) {
                do {
                  uVar9 = FUN_07188168(&local_90,DAT_091a1f50);
                  uVar7 = local_80;
                  if ((uVar9 & 1) == 0) {
                    FUN_07188164(&local_90,DAT_091a1f48);
                    return lVar5;
                  }
                  iVar12 = local_80._4_4_;
                  lVar4 = AnhPD_FoodOrder_PieceLookup__get_Config();
                  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  bVar3 = AnhPD_FoodOrder_RecipeConfigSO__TryGetPreparedOfPiece
                                    (lVar4,uVar7 & 0xffffffff,&local_98,0);
                } while ((bVar3 & 0 < iVar12) != 1);
                if (lVar5 == 0) break;
                do {
                  lVar4 = DAT_091b0570;
                  lVar8 = *(long *)(lVar5 + 0x10);
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar8 == 0) goto LAB_041d9f30;
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = local_98;
                    thunk_FUN_03f5d7b8();
                  }
                  else {
                    FUN_057e0c68(lVar5,local_98,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                  }
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
              }
LAB_041d9f30:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
        }
        else if (lVar5 != 0) {
          lVar4 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = local_48;
              thunk_FUN_03f5d7b8();
              return lVar5;
            }
            FUN_057e0c68(lVar5,local_48,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            return lVar5;
          }
        }
      }
LAB_041d9f38:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return lVar5;
}

