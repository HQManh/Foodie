// rea decompile_all
// name: System.Text.ASCIIEncoding$$GetCharCount
// address: 0x763a97c
// body: available
// range: 0x763a97c-0x763aacb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x763aac4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763aac8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Text_ASCIIEncoding__GetCharCount(long param_1,char *param_2,int param_3,long param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  
  if ((DAT_09522259 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09183818);
    DAT_09522259 = 1;
  }
  if (param_4 == 0) {
    plVar4 = *(long **)(param_1 + 0x30);
  }
  else {
    plVar4 = *(long **)(param_4 + 0x10);
  }
  if (((plVar4 == (long *)0x0) || (*plVar4 != DAT_09183818)) ||
     (iVar3 = (**(code **)(DAT_09183818 + 0x188))(plVar4,*(undefined8 *)(DAT_09183818 + 400)),
     iVar3 != 1)) {
    lVar5 = FUN_03f5c394(DAT_0917fc88,1);
    plVar4 = (long *)0x0;
    lVar1 = (long)param_3;
    pcVar6 = param_2;
    while (pcVar6 < param_2 + lVar1) {
      pcVar7 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar7;
      if (cVar2 < '\0') {
        if (plVar4 == (long *)0x0) {
          if (param_4 == 0) {
            plVar4 = *(long **)(param_1 + 0x30);
            if (plVar4 == (long *)0x0) goto LAB_0763aac4;
            plVar4 = (long *)(**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180))
            ;
          }
          else {
            plVar4 = (long *)System_Text_Decoder__get_FallbackBuffer(param_4);
          }
          if (plVar4 == (long *)0x0) goto LAB_0763aac4;
          plVar4[2] = (long)param_2;
          plVar4[3] = 0;
        }
        if (lVar5 == 0) {
LAB_0763aac4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(char *)(lVar5 + 0x20) = cVar2;
        iVar3 = (**(code **)(*plVar4 + 0x1c8))(plVar4,lVar5,pcVar7,*(undefined8 *)(*plVar4 + 0x1d0))
        ;
        param_3 = param_3 + iVar3 + -1;
      }
    }
  }
  return param_3;
}

