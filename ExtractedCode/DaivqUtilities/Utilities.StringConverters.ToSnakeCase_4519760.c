// rea decompile_all
// name: Utilities.StringConverters$$ToSnakeCase
// address: 0x4519760
// body: available
// range: 0x4519760-0x4519a9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4519a9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_StringConverters__ToSnakeCase(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  ulong local_58;
  
  if ((DAT_0951857e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b7610);
    FUN_03f5c2a4(&DAT_091b7608);
    FUN_03f5c2a4(&DAT_091b7618);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_0951857e = 1;
  }
  local_58 = 0;
  uVar4 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar4 & 1) != 0) {
    return param_1;
  }
  if (param_1 != 0) {
    iVar9 = *(int *)(param_1 + 0x10);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = System_Math__Min(2,iVar9 / 5,0);
    plVar5 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(plVar5,iVar1 + iVar9,0);
    local_58 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar9 = 0;
      do {
        uVar2 = System_String__get_Chars(param_1,iVar9,0);
        if ((uVar2 & 0xffff) == 0x5f) {
          if (plVar5 == (long *)0x0) goto LAB_04519a9c;
          System_Text_StringBuilder__Append(plVar5,0x5f,0);
          local_58 = 0;
        }
        else {
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar1 = System_Char__GetUnicodeCategory(uVar2,0);
          if (iVar1 < 2) {
            if (iVar1 == 0) {
LAB_04519908:
              iVar8 = (int)(local_58 >> 0x20);
              if (((local_58 & 0xff) == 0) || (iVar8 != 0xb && iVar8 != 1)) {
                if ((((local_58 & 0xff) == 0) || (iVar8 != 8)) &&
                   (((iVar9 != 0 && ((local_58 & 0xff) != 0)) &&
                    (iVar9 + 1 < *(int *)(param_1 + 0x10))))) {
                  uVar3 = System_String__get_Chars(param_1,iVar9 + 1,0);
                  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_09535460);
                  }
                  uVar4 = System_Char__IsLower(uVar3,0);
                  if ((uVar4 & 1) != 0) goto LAB_04519928;
                }
              }
              else {
LAB_04519928:
                if (plVar5 == (long *)0x0) goto LAB_04519a9c;
                System_Text_StringBuilder__Append(plVar5,0x5f,0);
              }
              if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09535460);
              }
              uVar2 = System_Char__ToLower(uVar2,uVar6,0);
LAB_045199d8:
              if (plVar5 != (long *)0x0) goto LAB_045199dc;
              goto LAB_04519a9c;
            }
            if (iVar1 == 1) goto LAB_04519940;
LAB_04519970:
            if ((char)local_58 == '\0') goto LAB_045199fc;
            iVar1 = 0xb;
          }
          else {
            if (iVar1 != 8) {
              if (iVar1 != 2) goto LAB_04519970;
              goto LAB_04519908;
            }
LAB_04519940:
            if ((local_58 >> 0x20 != 0xb) || ((local_58 & 0xff) == 0)) goto LAB_045199d8;
            if (plVar5 == (long *)0x0) goto LAB_04519a9c;
            System_Text_StringBuilder__Append(plVar5,0x5f,0);
LAB_045199dc:
            System_Text_StringBuilder__Append(plVar5,uVar2,0);
          }
          FUN_05c30b18(&local_58,iVar1,DAT_091b7608);
        }
LAB_045199fc:
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x10));
    }
    if (plVar5 != (long *)0x0) {
      lVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      return lVar7;
    }
  }
LAB_04519a9c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

