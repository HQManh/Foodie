// rea decompile_all
// name: Utilities.DragRigidbody$$HandleInputBegin
// address: 0x4506df8
// body: available
// range: 0x4506df8-0x4506f73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4506f70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DragRigidbody__HandleInputBegin
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
  if ((DAT_095184e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189070);
    FUN_03f5c2a4(&DAT_09204fc8);
    DAT_095184e6 = 1;
  }
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_44 = 0;
  uStack_50 = 0;
  lVar3 = UnityEngine_Camera__get_main(0);
  if (lVar3 != 0) {
    UnityEngine_Camera__ScreenPointToRay(&local_78,param_1,param_2,param_3,lVar3,0);
    if (*(int *)(DAT_09189070 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_88 = uStack_70;
    local_90 = local_78;
    local_80 = local_68;
    uVar4 = UnityEngine_Physics__Raycast(&local_90,&local_60,0);
    if ((uVar4 & 1) != 0) {
      lVar3 = UnityEngine_RaycastHit__get_transform(&local_60,0);
      if ((lVar3 == 0) || (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 == 0))
      goto LAB_04506f70;
      iVar1 = UnityEngine_GameObject__get_layer(lVar3,0);
      iVar2 = UnityEngine_LayerMask__NameToLayer(DAT_09204fc8,0);
      if (iVar1 == iVar2) {
        uVar5 = UnityEngine_Camera__get_main(0);
        UnityEngine_RaycastHit__get_point(&local_60,0);
        uVar6 = Utilities_CameraPlane__CameraToPointDepth(uVar5);
        *(undefined4 *)(param_4 + 0x30) = uVar6;
        uVar5 = UnityEngine_RaycastHit__get_rigidbody(&local_60,0);
        UnityEngine_RaycastHit__get_point(&local_60,0);
        uVar5 = Utilities_DragRigidbody__AttachJoint(param_4,uVar5);
        *(undefined8 *)(param_4 + 0x28) = uVar5;
        thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x28),uVar5);
      }
    }
    return;
  }
LAB_04506f70:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

