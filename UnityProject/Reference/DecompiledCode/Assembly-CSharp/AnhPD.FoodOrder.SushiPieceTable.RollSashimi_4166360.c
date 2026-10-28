// rea decompile_all
// name: AnhPD.FoodOrder.SushiPieceTable$$RollSashimi
// address: 0x4166360
// body: available
// range: 0x4166360-0x4166713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416670c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4166710 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SushiPieceTable__RollSashimi
               (undefined8 *param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_095165cf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b08f8);
    FUN_03f5c2a4(&DAT_091b0900);
    FUN_03f5c2a4(&DAT_091b08f0);
    FUN_03f5c2a4(&DAT_091b0908);
    FUN_03f5c2a4(&DAT_091b0910);
    FUN_03f5c2a4(&DAT_0917cd70);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b680);
    FUN_03f5c2a4(&DAT_092143a8);
    FUN_03f5c2a4(&DAT_092143c0);
    DAT_095165cf = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar6 = thunk_FUN_03f9944c(DAT_0917cd70);
  FUN_0579924c(lVar6,DAT_091b08f0);
  if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar11 = **(long **)(DAT_0918b680 + 0xb8);
  if (lVar11 != 0) {
    if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
      uVar12 = 0;
      uVar7 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar4 = *(undefined4 *)(lVar11 + 0x20 + uVar12 * 4);
        if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = AnhPD_FoodOrder_PieceLookup__Exists(uVar4,0);
        if (((uVar7 & 1) != 0) &&
           ((param_3 == 0 ||
            (uVar7 = (**(code **)(param_3 + 0x18))
                               (*(undefined8 *)(param_3 + 0x40),uVar4,
                                *(undefined8 *)(param_3 + 0x28)), (uVar7 & 1) != 0)))) {
          lVar2 = DAT_091b08f8;
          if (lVar6 == 0) goto LAB_04166710;
          lVar8 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_04166710;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar4;
          }
          else {
            FUN_05799adc(lVar6,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar7 = (ulong)*(uint *)(lVar11 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)*(uint *)(lVar11 + 0x18));
    }
    if (lVar6 != 0) {
      iVar3 = *(int *)(lVar6 + 0x18);
      if (iVar3 == 0) {
        uVar12 = AnhPD_FoodOrder_PieceLookup__get_HasConfig(0);
        puVar9 = &DAT_092143c0;
        if ((uVar12 & 1) == 0) {
          puVar9 = &DAT_092143a8;
        }
        uVar10 = *puVar9;
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogWarning(uVar10,0);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar9 = *(undefined8 **)(DAT_09189158 + 0xb8);
        uStack_90 = puVar9[1];
        local_98 = *puVar9;
        local_88 = puVar9[2];
      }
      else {
        if (2 < iVar3) {
          iVar3 = 3;
        }
        iVar3 = UnityEngine_Random__Range(1,iVar3 + 1,0);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09189158);
        }
        puVar9 = *(undefined8 **)(DAT_09189158 + 0xb8);
        uStack_78 = puVar9[1];
        local_80 = *puVar9;
        local_70 = puVar9[2];
        if (0 < iVar3) {
          do {
            uVar4 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar6 + 0x18),0);
            uVar5 = FUN_057997e4(lVar6,uVar4,DAT_091b0910);
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189158);
            }
            AnhPD_FoodOrder_PieceSet__Add(&local_98,&local_80,uVar5,1,0);
            uStack_78 = uStack_90;
            local_80 = local_98;
            local_70 = local_88;
            FUN_0579b33c(lVar6,uVar4,DAT_091b0900);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        uStack_a8 = uStack_78;
        local_b0 = local_80;
        local_a0 = local_70;
        if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_SushiPieceTable__RollDecors(&local_98,&local_b0,param_2,param_3);
      }
      param_1[1] = uStack_90;
      *param_1 = local_98;
      param_1[2] = local_88;
      return;
    }
  }
LAB_04166710:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

