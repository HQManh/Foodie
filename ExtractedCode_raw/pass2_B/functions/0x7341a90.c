// rea decompile_all
// name: Lean.Common.LeanPlane$$TryRaycast
// address: 0x7341a90
// body: available
// range: 0x7341a90-0x7341baf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7341bac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Lean_Common_LeanPlane__TryRaycast
               (float param_1,float param_2,float param_3,undefined8 param_4,undefined8 *param_5,
               undefined8 *param_6,uint param_7)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  float local_54;
  
  local_54 = 0.0;
  lVar2 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar2 != 0) {
    fVar3 = (float)UnityEngine_Transform__get_forward(lVar2,0);
    fVar6 = param_3;
    fVar7 = param_2;
    lVar2 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar2 != 0) {
      fVar4 = (float)UnityEngine_Transform__get_position(lVar2,0);
      local_60 = param_5[2];
      local_54 = 0.0;
      uStack_68 = param_5[1];
      local_70 = *param_5;
      uVar1 = Lean_Common_LeanPlane__RayToPlane
                        (fVar3 * param_1 + fVar4,param_2 * param_1 + fVar7,param_3 * param_1 + fVar6
                         ,fVar3,param_2,param_3,&local_70,&local_54);
      if ((uVar1 & 1) != 0) {
        fVar6 = (float)((ulong)*param_5 >> 0x20) +
                (float)((ulong)*(undefined8 *)((long)param_5 + 0xc) >> 0x20) * local_54;
        fVar7 = *(float *)(param_5 + 1) + local_54 * *(float *)((long)param_5 + 0x14);
        *param_6 = CONCAT44(fVar6,(float)*param_5 +
                                  (float)*(undefined8 *)((long)param_5 + 0xc) * local_54);
        *(float *)(param_6 + 1) = fVar7;
        if ((param_7 & 1) != 0) {
          uVar5 = Lean_Common_LeanPlane__GetClosest(param_4);
          *(undefined4 *)param_6 = uVar5;
          *(float *)((long)param_6 + 4) = fVar6;
          *(float *)(param_6 + 1) = fVar7;
        }
      }
      return uVar1 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

