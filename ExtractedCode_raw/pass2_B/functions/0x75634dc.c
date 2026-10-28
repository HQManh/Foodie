// rea decompile_all
// name: System.Buffers.Text.Number$$RoundNumber
// address: 0x75634dc
// body: available
// range: 0x75634dc-0x7563603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75635c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Buffers_Text_Number__RoundNumber(int *param_1,uint param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((DAT_095219d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba8e8);
    DAT_095219d0 = 1;
  }
  uVar3 = (ulong)param_2;
  if ((int)param_2 < 1) {
    uVar5 = 0;
LAB_07563548:
    uVar6 = uVar5;
    if ((uint)uVar5 == param_2) goto LAB_07563550;
LAB_07563564:
    lVar2 = (uVar5 & 0xffffffff) + 4;
    do {
      lVar4 = lVar2;
      if (lVar4 == 4) {
        uVar5 = 0;
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        goto LAB_075635f4;
      }
      if (0x33 < (uint)uVar5) goto LAB_075635c8;
      lVar2 = lVar4 + -1;
    } while (*(char *)((long)param_1 + lVar4) == '0');
    uVar5 = lVar4 - 4;
  }
  else {
    uVar5 = 0;
    do {
      if (uVar5 == 0x33) goto LAB_075635c8;
      if (*(char *)((long)param_1 + uVar5 + 5) == '\0') goto LAB_07563548;
      uVar5 = uVar5 + 1;
      uVar6 = uVar3;
    } while (uVar3 != uVar5);
LAB_07563550:
    if (0x32 < param_2) goto LAB_075635c8;
    uVar5 = uVar6;
    if (*(byte *)((long)param_1 + (ulong)param_2 + 5) < 0x35) goto LAB_07563564;
    do {
      uVar5 = uVar3;
      if (uVar5 == 0) {
        *(undefined1 *)((long)param_1 + 5) = 0x31;
        *param_1 = *param_1 + 1;
        uVar5 = 1;
        goto LAB_075635f4;
      }
      cVar1 = *(char *)((long)param_1 + uVar5 + 4);
      uVar3 = uVar5 - 1;
    } while (cVar1 == '9');
    *(char *)((long)param_1 + uVar5 + 4) = cVar1 + '\x01';
  }
  if ((uint)uVar5 < 0x33) {
LAB_075635f4:
    *(undefined1 *)((long)param_1 + (uVar5 & 0xffffffff) + 5) = 0;
    return;
  }
LAB_075635c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

