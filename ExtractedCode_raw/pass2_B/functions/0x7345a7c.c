// rea decompile_all
// name: Lean.Common.LeanScreenQuery$$DoRaycast3D
// address: 0x7345a7c
// body: available
// range: 0x7345a7c-0x7345c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7345c4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7345c50 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Common_LeanScreenQuery__DoRaycast3D
               (undefined4 param_1,undefined4 param_2,long param_3,long param_4,undefined8 *param_5,
               float *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if ((DAT_095206e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091876f8);
    FUN_03f5c2a4(&DAT_09189070);
    DAT_095206e1 = 1;
  }
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_64 = 0;
  uStack_70 = 0;
  if (param_4 != 0) {
    uVar8 = 0;
    UnityEngine_Camera__ScreenPointToRay(&local_98,param_1,param_2,param_4,0);
    if (*(int *)(DAT_091876f8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = **(undefined8 **)(DAT_091876f8 + 0xb8);
    uVar1 = UnityEngine_LayerMask__op_Implicit(*(undefined4 *)(param_3 + 4),0);
    if (*(int *)(DAT_09189070 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189070);
    }
    local_a0 = local_88;
    uStack_a8 = uStack_90;
    local_b0 = local_98;
    iVar2 = UnityEngine_Physics__RaycastNonAlloc(0x7f800000,&local_b0,uVar4,uVar1,0);
    if (0 < iVar2) {
      if (*(int *)(DAT_091876f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = **(long **)(DAT_091876f8 + 0xb8);
      uVar3 = Lean_Common_LeanScreenQuery__GetClosestRaycastHitsIndex(iVar2);
      if (lVar5 == 0) goto LAB_07345c4c;
      if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar5 = lVar5 + (long)(int)uVar3 * 0x2c;
      uStack_78 = *(undefined8 *)(lVar5 + 0x28);
      local_80 = *(undefined8 *)(lVar5 + 0x20);
      uStack_70 = *(undefined8 *)(lVar5 + 0x30);
      uStack_58 = *(undefined4 *)(lVar5 + 0x48);
      uStack_60 = (undefined4)*(undefined8 *)(lVar5 + 0x40);
      uStack_5c = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x40) >> 0x20);
      uStack_68 = (undefined4)*(undefined8 *)(lVar5 + 0x38);
      local_64 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x38) >> 0x20);
      fVar6 = (float)UnityEngine_RaycastHit__get_distance(&local_80,0);
      fVar7 = *param_6;
      if (fVar6 < fVar7) {
        *param_6 = fVar6;
        uVar4 = UnityEngine_RaycastHit__get_collider(&local_80,0);
        *param_5 = uVar4;
        thunk_FUN_03f5d7b8(param_5,uVar4);
        uVar1 = UnityEngine_RaycastHit__get_point(&local_80,0);
        *param_7 = uVar1;
        param_7[1] = fVar7;
        param_7[2] = uVar8;
      }
    }
    return;
  }
LAB_07345c4c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

