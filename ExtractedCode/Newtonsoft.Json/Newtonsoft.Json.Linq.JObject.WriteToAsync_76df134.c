// rea decompile_all
// name: Newtonsoft.Json.Linq.JObject$$WriteToAsync
// address: 0x76df134
// body: available
// range: 0x76df134-0x76df2db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76df26c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76df2d8 to 0x76df2dc Newtonsoft.Json.Linq.JObject$$<WriteToAsync>g__AwaitProperties|0_0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JObject__WriteToAsync
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  
  if ((DAT_095227cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_0919b488);
    FUN_03f5c2a4(&DAT_0919b490);
    DAT_095227cc = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x2a8))(param_2,param_3,*(undefined8 *)(*param_2 + 0x2b0));
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091817a0);
    }
    uVar3 = Newtonsoft_Json_Utilities_AsyncUtils__IsCompletedSuccessfully(uVar2,0);
    if ((uVar3 & 1) == 0) {
      iVar6 = 0;
LAB_076df2b8:
      Newtonsoft_Json_Linq_JObject__<WriteToAsync>g__AwaitProperties_0_0
                (param_1,uVar2,iVar6,param_2,param_3,param_4);
      return;
    }
    lVar4 = *(long *)(param_1 + 0x58);
    if (lVar4 != 0) {
      iVar6 = 0;
      do {
        iVar1 = FUN_06c773c8(lVar4,DAT_0919b488);
        if (iVar1 <= iVar6) {
                    /* WARNING: Could not recover jumptable at 0x076df2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 0x228))(param_2,param_3,*(undefined8 *)(*param_2 + 0x230));
          return;
        }
        if ((*(long *)(param_1 + 0x58) == 0) ||
           (plVar5 = (long *)FUN_06c7745c(*(long *)(param_1 + 0x58),iVar6,DAT_0919b490),
           plVar5 == (long *)0x0)) break;
        uVar2 = (**(code **)(*plVar5 + 0x1f8))
                          (plVar5,param_2,param_3,param_4,*(undefined8 *)(*plVar5 + 0x200));
        if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091817a0);
        }
        uVar3 = Newtonsoft_Json_Utilities_AsyncUtils__IsCompletedSuccessfully(uVar2,0);
        if ((uVar3 & 1) == 0) {
          iVar6 = iVar6 + 1;
          goto LAB_076df2b8;
        }
        lVar4 = *(long *)(param_1 + 0x58);
        iVar6 = iVar6 + 1;
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

