// rea decompile_all
// name: CakeOrder.InGame.GridSpawner$$GetRandomSpawnPoint
// address: 0x42b291c
// body: available
// range: 0x42b291c-0x42b2b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b2b10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
CakeOrder_InGame_GridSpawner__GetRandomSpawnPoint
          (undefined1 param_1 [16],float param_2,long param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 local_34;
  
  if ((DAT_095172bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919d2c8);
    FUN_03f5c2a4(&DAT_0919d2d0);
    FUN_03f5c2a4(&DAT_091b19e0);
    FUN_03f5c2a4(&DAT_091b19e8);
    FUN_03f5c2a4(&DAT_0920d5d8);
    DAT_095172bc = 1;
  }
  if ((*(long *)(param_3 + 0x18) != 0) &&
     (uVar2 = FUN_06ef0700(*(long *)(param_3 + 0x18),param_4,DAT_0919d2c8), (uVar2 & 1) != 0)) {
    if ((*(long *)(param_3 + 0x18) != 0) &&
       (lVar3 = FUN_06ef046c(*(long *)(param_3 + 0x18),param_4,DAT_0919d2d0), lVar3 != 0)) {
      if (*(int *)(lVar3 + 0x18) == 0) goto LAB_042b2a64;
      if ((*(long *)(param_3 + 0x18) != 0) &&
         (lVar3 = FUN_06ef046c(*(long *)(param_3 + 0x18),param_4,DAT_0919d2d0), lVar3 != 0)) {
        uVar1 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar3 + 0x18),0);
        fVar5 = (float)FUN_058ac314(lVar3,uVar1,DAT_091b19e8);
        fVar6 = *(float *)(param_3 + 0x10) * 0.5;
        uVar1 = UnityEngine_Random__Range(fVar5 - fVar6,fVar5 + fVar6,0);
        UnityEngine_Random__Range(param_2 - fVar6,param_2 + fVar6,0);
        return uVar1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_042b2a64:
  local_34 = param_4;
  uVar4 = FUN_03f5c42c(DAT_09535420,&local_34);
  uVar4 = System_String__Format(DAT_0920d5d8,uVar4,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__LogWarning(uVar4,0);
  if (DAT_09515ce8 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
  }
  return **(undefined4 **)(DAT_0918cb68 + 0xb8);
}

