// rea decompile_all
// name: Datpt.Cook_Order.CameraControl.<ShakeCoroutine>d__16$$MoveNext
// address: 0x41a1d3c
// body: available
// range: 0x41a1d3c-0x41a1e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a1e6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Datpt_Cook_Order_CameraControl_<ShakeCoroutine>d__16__MoveNext
          (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar2 == 0) goto LAB_041a1e6c;
    fVar4 = *(float *)(param_4 + 0x28);
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((lVar2 == 0) || (lVar1 = UnityEngine_Component__get_transform(lVar2,0), lVar1 == 0))
    goto LAB_041a1e6c;
    uVar3 = UnityEngine_Transform__get_localPosition(lVar1,0);
    fVar4 = 0.0;
    *(undefined4 *)(lVar2 + 0x38) = uVar3;
    *(float *)(lVar2 + 0x3c) = param_2;
    *(undefined4 *)(lVar2 + 0x40) = param_3;
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  if (fVar4 < *(float *)(lVar2 + 0x30)) {
    fVar4 = (float)UnityEngine_Random__get_insideUnitSphere(0);
    fVar5 = *(float *)(lVar2 + 0x34);
    lVar1 = UnityEngine_Component__get_transform(lVar2,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__set_localPosition
                (fVar4 * fVar5 + *(float *)(lVar2 + 0x38),param_2 * fVar5 + *(float *)(lVar2 + 0x3c)
                 ,*(float *)(lVar2 + 0x40) + 0.0,lVar1,0);
      fVar5 = *(float *)(param_4 + 0x28);
      fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
      *(float *)(param_4 + 0x28) = fVar5 + fVar4;
      *(undefined8 *)(param_4 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),0);
      *(undefined4 *)(param_4 + 0x10) = 1;
      return 1;
    }
  }
  else {
    lVar1 = UnityEngine_Component__get_transform(lVar2,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__set_localPosition
                (*(undefined4 *)(lVar2 + 0x38),*(undefined4 *)(lVar2 + 0x3c),
                 *(undefined4 *)(lVar2 + 0x40),lVar1,0);
      return 0;
    }
  }
LAB_041a1e6c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

