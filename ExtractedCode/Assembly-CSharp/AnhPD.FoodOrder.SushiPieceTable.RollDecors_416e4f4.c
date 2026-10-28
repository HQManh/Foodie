// rea decompile_all
// name: AnhPD.FoodOrder.SushiPieceTable$$RollDecors
// address: 0x416e4f4
// body: available
// range: 0x416e4f4-0x416e7d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416e7d0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416e7d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SushiPieceTable__RollDecors
               (undefined8 *param_1,undefined8 *param_2,int param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_095165d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b08f8);
    FUN_03f5c2a4(&DAT_091b0900);
    FUN_03f5c2a4(&DAT_091b08f0);
    FUN_03f5c2a4(&DAT_091b0908);
    FUN_03f5c2a4(&DAT_091b0910);
    FUN_03f5c2a4(&DAT_0917cd70);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b680);
    DAT_095165d2 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar7 = thunk_FUN_03f9944c(DAT_0917cd70);
  FUN_0579924c(lVar7,DAT_091b08f0);
  if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar10 = *(long *)(*(long *)(DAT_0918b680 + 0xb8) + 0x20);
  if (lVar10 != 0) {
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar11 = 0;
      uVar8 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar5 = *(undefined4 *)(lVar10 + 0x20 + uVar11 * 4);
        if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = AnhPD_FoodOrder_PieceLookup__Exists(uVar5,0);
        if (((uVar8 & 1) != 0) &&
           ((param_4 == 0 ||
            (uVar8 = (**(code **)(param_4 + 0x18))
                               (*(undefined8 *)(param_4 + 0x40),uVar5,
                                *(undefined8 *)(param_4 + 0x28)), (uVar8 & 1) != 0)))) {
          lVar3 = DAT_091b08f8;
          if (lVar7 == 0) goto LAB_0416e7d4;
          lVar9 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_0416e7d4;
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = uVar5;
          }
          else {
            FUN_05799adc(lVar7,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar8 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    if (lVar7 != 0) {
      iVar4 = *(int *)(lVar7 + 0x18);
      if (iVar4 == 0) {
        uStack_78 = param_2[1];
        local_80 = *param_2;
        local_70 = param_2[2];
      }
      else {
        iVar1 = param_3;
        if (iVar4 <= param_3) {
          iVar1 = iVar4;
        }
        if (param_3 < 1) {
          iVar1 = iVar4;
        }
        iVar4 = UnityEngine_Random__Range(0,iVar1 + 1,0);
        uStack_78 = param_2[1];
        local_80 = *param_2;
        local_70 = param_2[2];
        if (0 < iVar4) {
          do {
            uVar5 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar7 + 0x18),0);
            uVar6 = FUN_057997e4(lVar7,uVar5,DAT_091b0910);
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189158);
            }
            AnhPD_FoodOrder_PieceSet__Add(&local_98,&local_80,uVar6,1,0);
            uStack_78 = uStack_90;
            local_80 = local_98;
            local_70 = local_88;
            FUN_0579b33c(lVar7,uVar5,DAT_091b0900);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      param_1[1] = uStack_78;
      *param_1 = local_80;
      param_1[2] = local_70;
      return;
    }
  }
LAB_0416e7d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

