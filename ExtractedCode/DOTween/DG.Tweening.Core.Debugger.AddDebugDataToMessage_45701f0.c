// rea decompile_all
// name: DG.Tweening.Core.Debugger$$AddDebugDataToMessage
// address: 0x45701f0
// body: available
// range: 0x45701f0-0x45703bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Core_Debugger__AddDebugDataToMessage(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_34;
  
  if ((DAT_095188a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09214560);
    FUN_03f5c2a4(&DAT_091f5858);
    FUN_03f5c2a4(&DAT_09214558);
    FUN_03f5c2a4(&DAT_091ffbe8);
    FUN_03f5c2a4(&DAT_09214568);
    DAT_095188a0 = 1;
  }
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 200);
    lVar5 = *(long *)(param_2 + 0x38);
    iVar1 = *(int *)(param_2 + 0x40);
    if (((lVar3 != 0) || (lVar5 != 0)) || (iVar1 != -999)) {
      uVar2 = System_String__Concat(*param_1,DAT_091ffbe8,0);
      *param_1 = uVar2;
      thunk_FUN_03f5d7b8(param_1,uVar2);
      if (lVar3 != 0) {
        uVar4 = *param_1;
        uVar2 = System_String__Format(DAT_09214568,*(undefined8 *)(param_2 + 200),0);
        uVar2 = System_String__Concat(uVar4,uVar2,0);
        *param_1 = uVar2;
        thunk_FUN_03f5d7b8(param_1,uVar2);
      }
      if (lVar5 != 0) {
        uVar4 = *param_1;
        uVar2 = System_String__Format(DAT_09214560,*(undefined8 *)(param_2 + 0x38),0);
        uVar2 = System_String__Concat(uVar4,uVar2,0);
        *param_1 = uVar2;
        thunk_FUN_03f5d7b8(param_1,uVar2);
      }
      if (iVar1 != -999) {
        local_34 = *(undefined4 *)(param_2 + 0x40);
        uVar4 = *param_1;
        uVar2 = FUN_03f5c42c(DAT_09535420,&local_34);
        uVar2 = System_String__Format(DAT_09214558,uVar2,0);
        uVar2 = System_String__Concat(uVar4,uVar2,0);
        *param_1 = uVar2;
        thunk_FUN_03f5d7b8(param_1,uVar2);
      }
      uVar2 = System_String__Concat(*param_1,DAT_091f5858,0);
      *param_1 = uVar2;
      thunk_FUN_03f5d7b8(param_1,uVar2);
    }
  }
  return;
}

