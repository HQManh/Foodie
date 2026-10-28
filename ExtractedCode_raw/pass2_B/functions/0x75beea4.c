// rea decompile_all
// name: System.Number$$FormatScientific
// address: 0x75beea4
// body: available
// range: 0x75beea4-0x75bf0ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75bf0f4 to 0x75bf850 System.Number$$FormatExponent (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75bf0f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75bf0fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__FormatScientific
               (long param_1,long param_2,undefined8 param_3,int param_4,long param_5,
               undefined4 param_6)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  short *psVar5;
  short *psVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  if ((DAT_09521d5b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d5b = 1;
  }
  psVar5 = (short *)System_Number_NumberBuffer__get_digits(param_2,0);
  psVar6 = psVar5;
  sVar1 = 0x30;
  if (*psVar5 != 0) {
    psVar6 = psVar5 + 1;
    sVar1 = *psVar5;
  }
  if (DAT_09521150 == '\0') {
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521150 = '\x01';
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((int)uVar2 < (int)*(uint *)(param_1 + 0x10)) {
    if (*(uint *)(param_1 + 0x10) <= uVar2) goto LAB_075bf0f8;
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
    *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar2 * 2) = sVar1;
  }
  else {
    System_Text_ValueStringBuilder__GrowAndAppend(param_1,sVar1,0);
  }
  if (param_4 == 1) goto LAB_075bf088;
  if (param_5 == 0) {
LAB_075bf0fc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar9 = *(long *)(param_5 + 0x38);
  if (DAT_09521d81 == '\0') {
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521d81 = '\x01';
  }
  if (lVar9 == 0) goto LAB_075bf0fc;
  if (*(int *)(lVar9 + 0x10) == 1) {
    uVar2 = *(uint *)(param_1 + 0x18);
    if ((int)*(uint *)(param_1 + 0x10) <= (int)uVar2) goto LAB_075befec;
    if (*(uint *)(param_1 + 0x10) <= uVar2) {
LAB_075bf0f8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar10 = *(long *)(param_1 + 8);
    uVar4 = System_String__get_Chars(lVar9,0,0);
    *(undefined2 *)(lVar10 + (long)(int)uVar2 * 2) = uVar4;
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
  }
  else {
LAB_075befec:
    System_Text_ValueStringBuilder__AppendSlow(param_1,lVar9,0);
  }
  cVar7 = DAT_09521150;
  if (0 < param_4 + -1) {
    do {
      sVar1 = *psVar6;
      sVar3 = 0x30;
      if (sVar1 != 0) {
        psVar6 = psVar6 + 1;
        sVar3 = sVar1;
      }
      if (cVar7 == '\0') {
        FUN_03f5c2a4(&DAT_091ba998);
        cVar7 = '\x01';
        DAT_09521150 = '\x01';
      }
      uVar2 = *(uint *)(param_1 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(param_1 + 0x10)) {
        if (*(uint *)(param_1 + 0x10) <= uVar2) goto LAB_075bf0f8;
        *(uint *)(param_1 + 0x18) = uVar2 + 1;
        *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar2 * 2) = sVar3;
      }
      else {
        System_Text_ValueStringBuilder__GrowAndAppend(param_1,sVar3,0);
        cVar7 = DAT_09521150;
      }
      param_4 = param_4 + -1;
    } while (1 < param_4);
  }
LAB_075bf088:
  psVar6 = (short *)System_Number_NumberBuffer__get_digits(param_2,0);
  if (*psVar6 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_2 + 4) + -1;
  }
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Number__FormatExponent(param_1,param_5,iVar8,param_6,3,1);
  return;
}

