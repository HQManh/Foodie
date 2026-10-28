// rea decompile_all
// name: System.Globalization.HebrewNumber$$ToString
// address: 0x75086ac
// body: available
// range: 0x75086ac-0x7508957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7508954 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_HebrewNumber__ToString(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  byte bVar7;
  ulong uVar8;
  
  if ((DAT_095216b5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_095216b5 = 1;
  }
  plVar6 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar6,0);
  if (5000 < (int)param_1) {
    param_1 = param_1 - 5000;
  }
  if (99 < (int)param_1) {
    if (399 < param_1) {
      if (plVar6 == (long *)0x0) goto LAB_07508954;
      uVar8 = (ulong)param_1 / 400;
      do {
        System_Text_StringBuilder__Append(plVar6,0x5ea,0);
        uVar3 = (int)uVar8 - 1;
        uVar8 = (ulong)uVar3;
      } while (uVar3 != 0);
    }
    uVar3 = (int)param_1 / 100;
    param_1 = (int)param_1 % 100;
    uVar3 = uVar3 & 3;
    if (uVar3 != 0) {
      if (plVar6 == (long *)0x0) goto LAB_07508954;
      System_Text_StringBuilder__Append(plVar6,uVar3 + 0x5e6,0);
    }
  }
  iVar5 = (int)param_1 / 10;
  if (iVar5 < 5) {
    if (iVar5 < 3) {
      if (iVar5 == 1) {
        iVar5 = 0x5d9;
        bVar7 = 1;
      }
      else if (iVar5 == 2) {
        bVar7 = 0;
        iVar5 = 0x5db;
      }
      else {
LAB_07508864:
        bVar7 = 0;
        iVar5 = 0;
      }
    }
    else if (iVar5 == 3) {
      bVar7 = 0;
      iVar5 = 0x5dc;
    }
    else {
      if (iVar5 != 4) goto LAB_07508864;
      bVar7 = 0;
      iVar5 = 0x5de;
    }
  }
  else if (iVar5 < 7) {
    if (iVar5 == 5) {
      bVar7 = 0;
      iVar5 = 0x5e0;
    }
    else {
      if (iVar5 != 6) goto LAB_07508864;
      bVar7 = 0;
      iVar5 = 0x5e1;
    }
  }
  else if (iVar5 == 7) {
    bVar7 = 0;
    iVar5 = 0x5e2;
  }
  else if (iVar5 == 8) {
    bVar7 = 0;
    iVar5 = 0x5e4;
  }
  else {
    if (iVar5 != 9) goto LAB_07508864;
    bVar7 = 0;
    iVar5 = 0x5e6;
  }
  uVar3 = (int)param_1 % 10 + 0x5cf;
  if ((int)param_1 % 10 < 1) {
    uVar3 = 0;
  }
  bVar4 = !(bool)(uVar3 == 0x5d4 & bVar7);
  uVar1 = 0x5d5;
  if (bVar4) {
    uVar1 = uVar3;
  }
  iVar2 = 0x5d8;
  if (bVar4) {
    iVar2 = iVar5;
  }
  bVar4 = (uVar1 & 0xffff) != 0x5d5;
  iVar5 = 0x5d8;
  if (bVar4 || iVar2 != 0x5d9) {
    iVar5 = iVar2;
  }
  uVar3 = 0x5d6;
  if (bVar4 || iVar2 != 0x5d9) {
    uVar3 = uVar1;
  }
  if (iVar5 != 0) {
    if (plVar6 == (long *)0x0) goto LAB_07508954;
    System_Text_StringBuilder__Append(plVar6,iVar5,0);
  }
  if ((uVar3 & 0xffff) == 0) {
    if (plVar6 == (long *)0x0) goto LAB_07508954;
  }
  else {
    if (plVar6 == (long *)0x0) {
LAB_07508954:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Text_StringBuilder__Append(plVar6,uVar3,0);
  }
  iVar5 = System_Text_StringBuilder__get_Length(plVar6,0);
  if (iVar5 < 2) {
    System_Text_StringBuilder__Append(plVar6,0x27,0);
  }
  else {
    iVar5 = System_Text_StringBuilder__get_Length(plVar6,0);
    System_Text_StringBuilder__Insert(plVar6,iVar5 + -1,0x22,0);
  }
                    /* WARNING: Could not recover jumptable at 0x07508950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  return;
}

