// rea decompile_all
// name: Coffee.UIEffectInternal.MeshExtensions$$CopyTo
// address: 0x43e4088
// body: available
// range: 0x43e4088-0x43e43af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e43ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffectInternal_MeshExtensions__CopyTo(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_09517d55 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a9120);
    FUN_03f5c2a4(&DAT_091a90d0);
    FUN_03f5c2a4(&DAT_091a9110);
    FUN_03f5c2a4(&DAT_091a90b0);
    FUN_03f5c2a4(&DAT_091a9128);
    FUN_03f5c2a4(&DAT_091a9118);
    FUN_03f5c2a4(&DAT_091a90b8);
    FUN_03f5c2a4(&DAT_091a90d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517d55 = 1;
  }
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_58 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_1,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(param_2,0);
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_055657e4(DAT_091a9110);
      local_38 = uVar2;
      uVar3 = FUN_055658d4(DAT_091a9120);
      local_48 = uVar3;
      uVar4 = FUN_05565514(DAT_091a90b0);
      local_50 = uVar4;
      uVar5 = FUN_05565604(DAT_091a90d0);
      local_58 = uVar5;
      if ((param_2 == 0) || (UnityEngine_Mesh__Clear(param_2,0,0), param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Mesh__GetVertices(param_1,uVar2,0);
      UnityEngine_Mesh__SetVertices(param_2,uVar2,0);
      UnityEngine_Mesh__GetTriangles(param_1,uVar5,0,0);
      UnityEngine_Mesh__SetTriangles(param_2,uVar5,0,0);
      UnityEngine_Mesh__GetNormals(param_1,uVar2,0);
      UnityEngine_Mesh__SetNormals(param_2,uVar2,0);
      UnityEngine_Mesh__GetTangents(param_1,uVar3,0);
      UnityEngine_Mesh__SetTangents(param_2,uVar3,0);
      UnityEngine_Mesh__GetColors(param_1,uVar4,0);
      UnityEngine_Mesh__SetColors(param_2,uVar4,0);
      UnityEngine_Mesh__GetUVs(param_1,0,uVar3,0);
      UnityEngine_Mesh__SetUVs(param_2,0,uVar3,0);
      UnityEngine_Mesh__GetUVs(param_1,1,uVar3,0);
      UnityEngine_Mesh__SetUVs(param_2,1,uVar3,0);
      UnityEngine_Mesh__GetUVs(param_1,2,uVar3,0);
      UnityEngine_Mesh__SetUVs(param_2,2,uVar3,0);
      UnityEngine_Mesh__GetUVs(param_1,3,uVar3,0);
      UnityEngine_Mesh__SetUVs(param_2,3,uVar3,0);
      UnityEngine_Mesh__RecalculateBounds(param_2,0);
      FUN_05565848(&local_38,DAT_091a9118);
      FUN_05565938(&local_48,DAT_091a9128);
      FUN_05565578(&local_50,DAT_091a90b8);
      FUN_05565668(&local_58,DAT_091a90d8);
    }
  }
  return;
}

