// rea decompile_all
// name: AnhPD.FoodOrder.SandwichPieceTable$$PickSome
// address: 0x415f7b4
// body: available
// range: 0x415f7b4-0x415faaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x415faa8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415faac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SandwichPieceTable__PickSome
               (undefined8 *param_1,undefined4 param_2,undefined8 *param_3,long param_4,int param_5,
               int param_6,undefined8 param_7)

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
  ulong uVar10;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09516525 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091afae8);
    FUN_03f5c2a4(&DAT_091afaf8);
    FUN_03f5c2a4(&DAT_091afae0);
    FUN_03f5c2a4(&DAT_091afb00);
    FUN_03f5c2a4(&DAT_091afb08);
    FUN_03f5c2a4(&DAT_0917caf8);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a578);
    DAT_09516525 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar6 = thunk_FUN_03f9944c(DAT_0917caf8);
  FUN_0579924c(lVar6,DAT_091afae0);
  if (param_4 != 0) {
    if (0 < (int)*(ulong *)(param_4 + 0x18)) {
      uVar10 = 0;
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar4 = *(undefined4 *)(param_4 + 0x20 + uVar10 * 4);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(param_3,uVar4,0);
        if (iVar3 == 0) {
          if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = AnhPD_FoodOrder_SandwichPieceTable__IsUsable(param_2,uVar4,param_7);
          lVar2 = DAT_091afae8;
          if ((uVar7 & 1) != 0) {
            if (lVar6 == 0) goto LAB_0415faac;
            lVar8 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_0415faac;
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
        }
        uVar7 = (ulong)*(uint *)(param_4 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(param_4 + 0x18));
    }
    if (lVar6 != 0) {
      iVar3 = *(int *)(lVar6 + 0x18);
      if (iVar3 < param_5) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar9 = *(undefined8 **)(DAT_09189158 + 0xb8);
        uStack_78 = puVar9[1];
        local_80 = *puVar9;
        local_70 = puVar9[2];
      }
      else {
        if (iVar3 <= param_6) {
          param_6 = iVar3;
        }
        iVar3 = UnityEngine_Random__Range(param_5,param_6 + 1,0);
        uStack_78 = param_3[1];
        local_80 = *param_3;
        local_70 = param_3[2];
        if (0 < iVar3) {
          do {
            uVar4 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar6 + 0x18),0);
            uVar5 = FUN_057997e4(lVar6,uVar4,DAT_091afb08);
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189158);
            }
            AnhPD_FoodOrder_PieceSet__Add(&local_98,&local_80,uVar5,1,0);
            uStack_78 = uStack_90;
            local_80 = local_98;
            local_70 = local_88;
            FUN_0579b33c(lVar6,uVar4,DAT_091afaf8);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      param_1[1] = uStack_78;
      *param_1 = local_80;
      param_1[2] = local_70;
      return;
    }
  }
LAB_0415faac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

