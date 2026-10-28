// rea decompile_all
// name: _GAME.Utils.SaveFile.WritableMembersResolver$$CreateProperty
// address: 0x77474c8
// body: available
// range: 0x77474c8-0x774763b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7747638 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _GAME_Utils_SaveFile_WritableMembersResolver__CreateProperty
               (undefined8 param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((DAT_09522b2d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917dff8);
    FUN_03f5c2a4(&DAT_09189788);
    FUN_03f5c2a4(&DAT_091f33d8);
    FUN_03f5c2a4(&DAT_09196b38);
    DAT_09522b2d = 1;
  }
  lVar1 = Newtonsoft_Json_Serialization_DefaultContractResolver__CreateProperty
                    (param_1,param_2,param_3,0);
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    if (((*(byte *)(DAT_09189788 + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
        (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 + -8) ==
         DAT_09189788)) &&
       (uVar2 = (**(code **)(lVar4 + 0x2a8))(param_2,*(undefined8 *)(lVar4 + 0x2b0)),
       (uVar2 & 1) == 0)) {
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(lVar1 + 0x83) == '\0') {
        if (*(int *)(DAT_09196b38 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar5 = *(undefined8 **)(DAT_09196b38 + 0xb8);
        lVar4 = puVar5[1];
        if (lVar4 == 0) {
          if (*(int *)(DAT_09196b38 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar5 = *(undefined8 **)(DAT_09196b38 + 0xb8);
          }
          uVar6 = *puVar5;
          lVar4 = thunk_FUN_03f9944c(DAT_0917dff8);
          FUN_05d78cfc(lVar4,uVar6,DAT_091f33d8,0);
          plVar3 = (long *)(*(long *)(DAT_09196b38 + 0xb8) + 8);
          *plVar3 = lVar4;
          thunk_FUN_03f5d7b8(plVar3,lVar4);
        }
        *(long *)(lVar1 + 0xb0) = lVar4;
        thunk_FUN_03f5d7b8((long *)(lVar1 + 0xb0),lVar4);
      }
    }
  }
  return lVar1;
}

