// rea decompile_all
// name: AnhPD.FoodOrder.SandwichStackDisplay$$TestFillings
// address: 0x4160c00
// body: available
// range: 0x4160c00-0x4160eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4160ee8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4160eec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SandwichStackDisplay__TestFillings(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0951652f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091afae8);
    FUN_03f5c2a4(&DAT_091afaf0);
    FUN_03f5c2a4(&DAT_091afaf8);
    FUN_03f5c2a4(&DAT_091afae0);
    FUN_03f5c2a4(&DAT_091afb00);
    FUN_03f5c2a4(&DAT_091afb08);
    FUN_03f5c2a4(&DAT_0917caf8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_0951652f = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  param_1[9] = 0;
  local_90 = 0;
  thunk_FUN_03f5d7b8(param_1 + 9,0);
  lVar5 = thunk_FUN_03f9944c(DAT_0917caf8);
  FUN_0579924c(lVar5,DAT_091afae0);
  lVar9 = param_1[4];
  if (lVar9 == 0) {
LAB_04160ee8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(lVar9 + 0x18);
  if (0 < (int)uVar1) {
    uVar10 = 0;
    do {
      if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar11 = *(long *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_04160ee8;
      uVar8 = *(undefined8 *)(lVar11 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Implicit(uVar8,0);
      if ((uVar6 & 1) != 0) {
        if (lVar5 == 0) goto LAB_04160ee8;
        uVar6 = FUN_05799e5c(lVar5,*(undefined4 *)(lVar11 + 0x18),DAT_091afaf0);
        lVar2 = DAT_091afae8;
        if ((uVar6 & 1) == 0) {
          lVar7 = *(long *)(lVar5 + 0x10);
          uVar3 = *(undefined4 *)(lVar11 + 0x18);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_04160ee8;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
          }
          else {
            FUN_05799adc(lVar5,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      uVar1 = *(uint *)(lVar9 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar1);
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_PieceSet__One(&local_a0,0,0);
  if (0 < param_2) {
    if (lVar5 == 0) goto LAB_04160ee8;
    do {
      if (*(int *)(lVar5 + 0x18) < 1) break;
      uVar3 = UnityEngine_Random__Range(0,*(int *)(lVar5 + 0x18),0);
      uVar4 = FUN_057997e4(lVar5,uVar3,DAT_091afb08);
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189158);
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_80,&local_a0,uVar4,1,0);
      uStack_98 = uStack_78;
      local_a0 = local_80;
      local_90 = local_70;
      FUN_0579b33c(lVar5,uVar3,DAT_091afaf8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uStack_78 = uStack_98;
  local_80 = local_a0;
  local_70 = local_90;
  (**(code **)(*param_1 + 0x188))(param_1,&local_80,*(undefined8 *)(*param_1 + 400));
  (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  return;
}

