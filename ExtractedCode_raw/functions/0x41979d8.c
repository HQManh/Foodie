// rea decompile_all
// name: Datpt.Utilities$$SetParentKeepWorldScale
// address: 0x41979d8
// body: available
// range: 0x41979d8-0x4197aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4197ae8 to 0x866d690 UnityEngine.Transform$$set_localScale (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4197aec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Utilities__SetParentKeepWorldScale
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               uint param_6)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_095167eb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095167eb = 1;
  }
  if (param_4 != 0) {
    fVar3 = (float)UnityEngine_Transform__get_lossyScale(param_4,0);
    fVar5 = param_2;
    fVar6 = param_3;
    UnityEngine_Transform__SetParent(param_4,param_5,param_6 & 1,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(param_5,0,0);
    if ((uVar1 & 1) == 0) {
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      lVar2 = *(long *)(DAT_0918cbd0 + 0xb8);
      fVar4 = *(float *)(lVar2 + 0xc);
      fVar5 = *(float *)(lVar2 + 0x10);
      fVar6 = *(float *)(lVar2 + 0x14);
    }
    else {
      if (param_5 == 0) goto LAB_04197aec;
      fVar4 = (float)UnityEngine_Transform__get_lossyScale(param_5,0);
    }
    UnityEngine_Transform__set_localScale(fVar3 / fVar4,param_2 / fVar5,param_3 / fVar6,param_4,0);
    return;
  }
LAB_04197aec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

