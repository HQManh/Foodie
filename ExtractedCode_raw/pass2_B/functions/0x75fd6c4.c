// rea decompile_all
// name: System.Environment$$UnixGetFolderPath
// address: 0x75fd6c4
// body: available
// range: 0x75fd6c4-0x75fdb7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75fda64 to 0x758da48 System.IO.Path$$Combine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75fdafc to 0x758afe8 System.IO.Path$$Combine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75fdb30 to 0x75fdb7c System.Environment$$ReadXdgUserDir (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75fdb78 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Environment__UnixGetFolderPath(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if ((DAT_09521f9a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_09206d30);
    FUN_03f5c2a4(&DAT_0920a848);
    FUN_03f5c2a4(&DAT_092135e8);
    FUN_03f5c2a4(&DAT_092135f0);
    FUN_03f5c2a4(&DAT_092135e0);
    FUN_03f5c2a4(&DAT_091f9588);
    FUN_03f5c2a4(&DAT_092229d8);
    FUN_03f5c2a4(&DAT_091f9310);
    FUN_03f5c2a4(&DAT_092135d0);
    FUN_03f5c2a4(&DAT_09212f20);
    FUN_03f5c2a4(&DAT_091f9428);
    FUN_03f5c2a4(&DAT_0920e8f0);
    FUN_03f5c2a4(&DAT_09202cf0);
    FUN_03f5c2a4(&DAT_09202848);
    FUN_03f5c2a4(&DAT_091f9350);
    FUN_03f5c2a4(&DAT_092082f8);
    FUN_03f5c2a4(&DAT_091f9378);
    FUN_03f5c2a4(&DAT_092135c8);
    FUN_03f5c2a4(&DAT_091f9590);
    FUN_03f5c2a4(&DAT_092135f8);
    FUN_03f5c2a4(&DAT_092135d8);
    FUN_03f5c2a4(&DAT_092007e0);
    FUN_03f5c2a4(&DAT_091fd498);
    DAT_09521f9a = 1;
  }
  lVar2 = FUN_03f731c8();
  lVar3 = System_Environment__internalGetEnvironmentVariable(DAT_092135d0);
  if ((lVar3 == 0) ||
     (uVar4 = System_String__op_Equality(lVar3,**(undefined8 **)(DAT_09535468 + 0xb8),0),
     (uVar4 & 1) != 0)) {
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_IO_Path__Combine(lVar2,DAT_091f9378,0);
    lVar3 = System_IO_Path__Combine(uVar5,DAT_092229d8,0);
  }
  lVar6 = System_Environment__internalGetEnvironmentVariable(DAT_092135c8);
  if ((lVar6 == 0) ||
     (uVar4 = System_String__op_Equality(lVar6,**(undefined8 **)(DAT_09535468 + 0xb8),0),
     (uVar4 & 1) != 0)) {
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = System_IO_Path__Combine(lVar2,DAT_091f9310,0);
  }
  switch(param_1) {
  case 0:
  case 0x10:
    puVar9 = &DAT_092135d8;
    puVar10 = &DAT_092007e0;
    break;
  default:
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar5 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09205350);
    System_ArgumentException___ctor(uVar5,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091cb6d0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar7);
  case 2:
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0x11:
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x25:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
    goto switchD_075fd914_caseD_2;
  case 5:
  case 0x28:
    return lVar2;
  case 6:
    iVar1 = FUN_03f72cfc();
    if (iVar1 == 6) {
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar9 = &DAT_09202848;
      goto LAB_075fda44;
    }
    goto switchD_075fd914_caseD_2;
  case 0xd:
    iVar1 = FUN_03f72cfc();
    if (iVar1 == 6) {
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar9 = &DAT_092082f8;
LAB_075fdae0:
      lVar2 = System_IO_Path__Combine(lVar2,*puVar9,0);
      return lVar2;
    }
    puVar9 = &DAT_092135e0;
    puVar10 = &DAT_092082f8;
    break;
  case 0xe:
    puVar9 = &DAT_092135f8;
    puVar10 = &DAT_09212f20;
    break;
  case 0x14:
    iVar1 = FUN_03f72cfc();
    if (iVar1 != 6) {
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar9 = &DAT_091f9350;
      goto LAB_075fdae0;
    }
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar9 = &DAT_09202cf0;
LAB_075fda44:
    lVar2 = System_IO_Path__Combine(lVar2,DAT_09206d30,*puVar9,0);
    return lVar2;
  case 0x15:
    puVar9 = &DAT_092135f0;
    puVar10 = &DAT_0920e8f0;
    break;
  case 0x1a:
    goto switchD_075fd914_caseD_1a;
  case 0x1c:
    return lVar3;
  case 0x20:
    iVar1 = FUN_03f72cfc();
    if (iVar1 == 6) {
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar9 = &DAT_091fd498;
      goto LAB_075fda44;
    }
switchD_075fd914_caseD_2:
    plVar8 = *(long **)(DAT_09535468 + 0xb8);
    goto LAB_075fd920;
  case 0x23:
    plVar8 = &DAT_091f9588;
    goto LAB_075fd920;
  case 0x26:
    iVar1 = FUN_03f72cfc();
    if (iVar1 != 6) goto switchD_075fd914_caseD_2;
    plVar8 = &DAT_091f9428;
    goto LAB_075fd920;
  case 0x27:
    iVar1 = FUN_03f72cfc();
    if (iVar1 == 6) {
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar9 = &DAT_0920a848;
      goto LAB_075fdae0;
    }
    puVar9 = &DAT_092135e8;
    puVar10 = &DAT_0920a848;
    break;
  case 0x2d:
    plVar8 = &DAT_091f9590;
LAB_075fd920:
    lVar6 = *plVar8;
switchD_075fd914_caseD_1a:
    return lVar6;
  }
  lVar2 = System_Environment__ReadXdgUserDir(lVar6,lVar2,*puVar9,*puVar10);
  return lVar2;
}

