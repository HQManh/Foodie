// rea decompile_all
// name: ChocDino.UIFX.AnimationCurveHelper$$HasOutOfRangeValues
// address: 0x43a215c
// body: available
// range: 0x43a215c-0x43a2273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a226c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43a2270 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool ChocDino_UIFX_AnimationCurveHelper__HasOutOfRangeValues
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  local_70 = 0;
  uStack_68 = 0;
  local_58 = 0;
  local_60 = 0;
  if ((param_5 == 0) || (lVar2 = UnityEngine_AnimationCurve__get_keys(param_5,0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar3 = (int)*(ulong *)(lVar2 + 0x18);
  bVar5 = 0 < iVar3;
  if (0 < iVar3) {
    uVar6 = 0;
    uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
    puVar7 = (undefined8 *)(lVar2 + 0x20);
    do {
      if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      local_58 = *(undefined4 *)(puVar7 + 3);
      local_60 = puVar7[2];
      uStack_68 = puVar7[1];
      local_70 = *puVar7;
      fVar8 = (float)UnityEngine_Keyframe__get_time(&local_70,0);
      if (fVar8 < param_1) {
        return bVar5;
      }
      fVar8 = (float)UnityEngine_Keyframe__get_time(&local_70,0);
      if (param_2 < fVar8) {
        return bVar5;
      }
      fVar8 = (float)UnityEngine_Keyframe__get_value(&local_70,0);
      if (fVar8 < param_3) {
        return bVar5;
      }
      fVar8 = (float)UnityEngine_Keyframe__get_value(&local_70,0);
      if (param_4 < fVar8) {
        return bVar5;
      }
      uVar1 = *(uint *)(lVar2 + 0x18);
      uVar4 = (ulong)uVar1;
      uVar6 = uVar6 + 1;
      puVar7 = (undefined8 *)((long)puVar7 + 0x1c);
      bVar5 = (long)uVar6 < (long)(int)uVar1;
    } while ((long)uVar6 < (long)(int)uVar1);
  }
  return bVar5;
}

