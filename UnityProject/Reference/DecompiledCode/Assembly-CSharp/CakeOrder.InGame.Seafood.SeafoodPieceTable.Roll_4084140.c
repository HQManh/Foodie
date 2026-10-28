// rea decompile_all
// name: CakeOrder.InGame.Seafood.SeafoodPieceTable$$Roll
// address: 0x4084140
// body: available
// range: 0x4084140-0x4084437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4084430 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4084434 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Seafood_SeafoodPieceTable__Roll(undefined8 *param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09515c8c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af040);
    FUN_03f5c2a4(&DAT_091af030);
    FUN_03f5c2a4(&DAT_091af058);
    FUN_03f5c2a4(&DAT_091af060);
    FUN_03f5c2a4(&DAT_0917c8f0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a7b8);
    DAT_09515c8c = 1;
  }
  uVar1 = param_2 - 1;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  if (uVar1 < 6) {
    lVar5 = thunk_FUN_03f9944c(DAT_0917c8f0);
    FUN_057f7434(lVar5,DAT_091af030);
    if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(*(long *)(DAT_0918a7b8 + 0xb8) + 0x18);
    if (lVar6 == 0) {
LAB_04084430:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
LAB_04084434:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar6 = *(long *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_04084430;
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar11 = 0;
      uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar11) goto LAB_04084434;
        uVar1 = *(uint *)(lVar6 + uVar11 * 4 + 0x20);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar8 = *(undefined8 **)(DAT_09189158 + 0xb8);
        uVar10 = 0;
        uStack_98 = puVar8[1];
        local_a0 = *puVar8;
        local_90 = puVar8[2];
        do {
          if ((uVar1 >> (ulong)(uVar10 & 0x1f) & 1) != 0) {
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            AnhPD_FoodOrder_PieceSet__Add(&local_80,&local_a0,uVar10,1,0);
            uStack_98 = uStack_78;
            local_a0 = local_80;
            local_90 = local_70;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != 0x1a);
        if (param_3 < 1) {
LAB_04084324:
          lVar2 = DAT_091af040;
          if (lVar5 == 0) goto LAB_04084430;
          lVar9 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_04084430;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar9 + 0x30) = local_90;
            *(undefined8 *)(lVar9 + 0x28) = uStack_98;
            *(undefined8 *)(lVar9 + 0x20) = local_a0;
          }
          else {
            uStack_78 = uStack_98;
            local_80 = local_a0;
            local_70 = local_90;
            FUN_057f7d3c(lVar5,&local_80,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar3 = AnhPD_FoodOrder_PieceSet__get_TotalCount(&local_a0,0);
          if (iVar3 <= param_3) goto LAB_04084324;
        }
        uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    if (lVar5 == 0) goto LAB_04084430;
    if (*(int *)(lVar5 + 0x18) != 0) {
      uVar4 = UnityEngine_Random__Range(0,*(int *)(lVar5 + 0x18),0);
      FUN_057f79cc(&local_80,lVar5,uVar4,DAT_091af060);
      goto LAB_04084408;
    }
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar8 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_78 = puVar8[1];
  local_80 = *puVar8;
  local_70 = puVar8[2];
LAB_04084408:
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[2] = local_70;
  return;
}

