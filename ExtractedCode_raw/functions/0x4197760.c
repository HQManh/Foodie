// rea decompile_all
// name: Datpt.Utilities$$CheckTouch
// address: 0x4197760
// body: available
// range: 0x4197760-0x419796b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4197968 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Utilities__CheckTouch
               (undefined1 param_1 [16],undefined4 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined4 local_e4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  if ((DAT_095167ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189078);
    DAT_095167ea = 1;
  }
  local_50 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  iVar1 = UnityEngine_Input__get_touchCount(0);
  if (iVar1 != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(param_3,0,0);
    if ((uVar2 & 1) == 0) {
      UnityEngine_Input__GetTouch(&local_104,0,0);
      memcpy(&local_90,&local_104,0x44);
      iVar1 = UnityEngine_Touch__get_phase(&local_90,0);
      if ((iVar1 == 0) || (iVar1 = UnityEngine_Touch__get_phase(&local_90,0), iVar1 == 1)) {
        uVar5 = UnityEngine_Touch__get_position(&local_90,0);
        lVar3 = UnityEngine_Camera__get_main(0);
        if (lVar3 == 0) {
LAB_04197968:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Camera__ScreenPointToRay(&local_11c,uVar5,param_2,0,lVar3,0);
        if (*(int *)(DAT_09189078 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_130 = local_10c;
        uStack_138 = uStack_114;
        local_140 = local_11c;
        UnityEngine_Physics2D__GetRayIntersection(&local_104,&local_140,0);
        uStack_b8 = uStack_fc;
        local_c0 = local_104;
        uStack_a8 = uStack_ec;
        uStack_b0 = local_f4;
        local_a0 = local_e4;
        uVar4 = UnityEngine_RaycastHit2D__get_collider(&local_c0,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if ((uVar2 & 1) != 0) {
          lVar3 = UnityEngine_RaycastHit2D__get_collider(&local_c0,0);
          if (lVar3 == 0) goto LAB_04197968;
          uVar4 = UnityEngine_Component__get_gameObject(lVar3,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar2 = UnityEngine_Object__op_Equality(uVar4,param_3,0);
          if ((param_4 != 0) && ((uVar2 & 1) != 0)) {
            (**(code **)(param_4 + 0x18))
                      (*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x28));
          }
        }
      }
    }
  }
  return;
}

