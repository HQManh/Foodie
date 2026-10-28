// rea decompile_all
// name: System.Environment$$CreateVersionFromString
// address: 0x75fd25c
// body: available
// range: 0x75fd25c-0x75fd457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Environment__CreateVersionFromString(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if ((DAT_09521f96 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918cc90);
    DAT_09521f96 = 1;
  }
  if (param_1 == 0) {
    uVar3 = thunk_FUN_03f9944c(DAT_0918cc90);
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar11 = 0;
    goto LAB_075fd418;
  }
  if (*(int *)(param_1 + 0x10) < 1) {
    iVar11 = 0;
    iVar4 = 0;
    iVar6 = 0;
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar9 = 0;
    iVar11 = -1;
    iVar10 = 1;
    do {
      uVar1 = System_String__get_Chars(param_1,iVar9,0);
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535460);
      }
      uVar2 = System_Char__IsDigit(uVar1,0);
      if ((uVar2 & 1) == 0) {
        if (-1 < iVar11) {
          iVar8 = iVar7;
          iVar5 = iVar4;
          if (iVar10 < 3) {
            iVar8 = iVar11;
            if ((iVar10 != 1) && (iVar8 = iVar7, iVar10 == 2)) {
              iVar6 = iVar11;
            }
          }
          else {
            iVar5 = iVar11;
            if ((iVar10 != 3) && (iVar5 = iVar4, iVar10 == 4)) goto LAB_075fd3fc;
          }
          iVar10 = iVar10 + 1;
          iVar11 = -1;
          iVar7 = iVar8;
          iVar4 = iVar5;
        }
      }
      else {
        if (iVar11 < 0) {
          uVar1 = uVar1 & 0xffff;
        }
        else {
          uVar1 = iVar11 * 10 + (uVar1 & 0xffff);
        }
        iVar11 = uVar1 - 0x30;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x10));
    if (iVar11 < 0) {
LAB_075fd3f8:
      iVar11 = 0;
    }
    else if (iVar10 < 3) {
      if (iVar10 == 1) {
        iVar7 = iVar11;
        iVar11 = 0;
      }
      else {
        if (iVar10 != 2) goto LAB_075fd3f8;
        iVar6 = iVar11;
        iVar11 = 0;
      }
    }
    else if (iVar10 == 3) {
      iVar4 = iVar11;
      iVar11 = 0;
    }
    else if (iVar10 != 4) goto LAB_075fd3f8;
  }
LAB_075fd3fc:
  uVar3 = thunk_FUN_03f9944c(DAT_0918cc90);
LAB_075fd418:
  System_Version___ctor(uVar3,iVar7,iVar6,iVar4,iVar11,0);
  return uVar3;
}

