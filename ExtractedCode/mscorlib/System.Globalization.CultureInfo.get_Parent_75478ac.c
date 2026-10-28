// rea decompile_all
// name: System.Globalization.CultureInfo$$get_Parent
// address: 0x75478ac
// body: available
// range: 0x75478ac-0x7547b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7547b1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_CultureInfo__get_Parent(long *param_1)

{
  int iVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  
  if ((DAT_095218f3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09225e70);
    FUN_03f5c2a4(&DAT_09225e50);
    FUN_03f5c2a4(&DAT_09225e68);
    DAT_095218f3 = 1;
  }
  plVar6 = param_1 + 0x15;
  if (*plVar6 != 0) goto LAB_07547b08;
  if ((char)param_1[0x16] == '\0') {
    FUN_03f62a54(param_1,*(undefined4 *)((long)param_1 + 0x14));
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  iVar1 = *(int *)((long)param_1 + 0x14);
  iVar7 = (int)param_1[3];
  if (iVar7 == iVar1) {
    if (iVar7 == 0x7c04) {
      lVar3 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
      lVar4 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
      if ((lVar4 == 0) || (lVar3 == 0)) goto LAB_07547b1c;
      sVar2 = System_String__get_Chars(lVar3,*(int *)(lVar4 + 0x10) + -1,0);
      if (sVar2 == 0x79) {
        lVar3 = thunk_FUN_03f9944c(DAT_09182ff8);
        puVar5 = &DAT_09225e70;
        goto LAB_07547a74;
      }
      iVar7 = (int)param_1[3];
    }
    if (iVar7 != 4) {
      return 0;
    }
    lVar3 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    lVar4 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    if ((lVar4 != 0) && (lVar3 != 0)) {
      sVar2 = System_String__get_Chars(lVar3,*(int *)(lVar4 + 0x10) + -1,0);
      if (sVar2 != 0x79) {
        return 0;
      }
      lVar3 = thunk_FUN_03f9944c(DAT_09182ff8);
      puVar5 = &DAT_09225e68;
LAB_07547a74:
      System_Globalization_CultureInfo___ctor(lVar3,*puVar5,1,0);
      *plVar6 = lVar3;
      thunk_FUN_03f5d7b8(plVar6,lVar3);
      return lVar3;
    }
LAB_07547b1c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (iVar7 == 0x7f) {
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_1 = (long *)System_Globalization_CultureInfo__get_InvariantCulture();
    *plVar6 = (long)param_1;
  }
  else {
    if (iVar1 == 0x404) {
      param_1 = (long *)thunk_FUN_03f9944c(DAT_09182ff8);
      System_Globalization_CultureInfo___ctor(param_1,DAT_09225e50,1,0);
    }
    else {
      if (iVar1 == 0x7f) {
        param_1[0x15] = (long)param_1;
        goto LAB_07547b04;
      }
      param_1 = (long *)thunk_FUN_03f9944c(DAT_09182ff8);
      System_Globalization_CultureInfo___ctor(param_1,iVar7,1,0);
    }
    *plVar6 = (long)param_1;
  }
LAB_07547b04:
  thunk_FUN_03f5d7b8(plVar6,param_1);
LAB_07547b08:
  return *plVar6;
}

