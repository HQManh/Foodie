// rea decompile_all
// name: ChocDino.UIFX.DistanceMap$$Process
// address: 0x43cb118
// body: available
// range: 0x43cb118-0x43cb347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_DistanceMap__Process(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_09517beb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517beb = 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  uVar2 = UnityEngine_RenderTexture__GetActive(0);
  ChocDino_UIFX_DistanceMap__SetupResources(param_1,param_2);
  if (*(char *)(param_1 + 0x40) != '\0') {
    ChocDino_UIFX_DistanceMap__UpdateMaterials(param_1);
  }
  puVar8 = (undefined8 *)(param_1 + 0x38);
  *puVar8 = *(undefined8 *)(param_1 + 0x30);
  thunk_FUN_03f5d7b8(puVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar3 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar9 = ChocDino_UIFX_DistanceMap__GetTempJumpFloodTexture(param_1);
    if (uVar1 < 2) {
      local_48 = uVar9;
      uVar4 = ChocDino_UIFX_DistanceMap__GetTempJumpFloodTexture(param_1);
      local_50 = uVar4;
      ChocDino_UIFX_DistanceMap__ProcessPrime(param_1,*(int *)(param_1 + 0x10) == 0,uVar9);
      uVar9 = ChocDino_UIFX_DistanceMap__ProcessJumpFlood(param_1,uVar9,uVar9,uVar4);
      ChocDino_UIFX_DistanceMap__ProcessResolveDistance(param_1,uVar9);
      puVar10 = &local_48;
      puVar7 = &local_50;
    }
    else {
      local_58 = uVar9;
      uVar4 = ChocDino_UIFX_DistanceMap__GetTempJumpFloodTexture(param_1);
      local_60 = uVar4;
      ChocDino_UIFX_DistanceMap__ProcessPrime(param_1,1,uVar9);
      uVar5 = ChocDino_UIFX_DistanceMap__ProcessJumpFlood(param_1,uVar9,uVar9,uVar4);
      uVar6 = ChocDino_UIFX_DistanceMap__GetTempJumpFloodTexture(param_1);
      local_68 = uVar6;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar5,uVar9,0);
      if ((uVar3 & 1) == 0) {
        uVar4 = uVar9;
      }
      ChocDino_UIFX_DistanceMap__ProcessPrime(param_1,0,uVar6);
      uVar9 = ChocDino_UIFX_DistanceMap__ProcessJumpFlood(param_1,uVar6,uVar6,uVar4);
      ChocDino_UIFX_DistanceMap__ProcessResolveDistanceSDF(param_1,uVar5,uVar9);
      ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(&local_68,0);
      puVar10 = &local_58;
      puVar7 = &local_60;
    }
    ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(puVar7,0);
    ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(puVar10,0);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x28);
    thunk_FUN_03f5d7b8(puVar8);
  }
  UnityEngine_RenderTexture__set_active(uVar2,0);
  return *puVar8;
}

