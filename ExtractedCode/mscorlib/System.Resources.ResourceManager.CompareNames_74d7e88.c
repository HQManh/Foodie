// rea decompile_all
// name: System.Resources.ResourceManager$$CompareNames
// address: 0x74d7e88
// body: available
// range: 0x74d7e88-0x74d80c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d80c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Resources_ResourceManager__CompareNames(long param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  
  if ((DAT_09521570 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181610);
    FUN_03f5c2a4(&DAT_0921f960);
    DAT_09521570 = 1;
  }
  if (param_1 != 0) {
    iVar2 = System_String__IndexOf(param_1,0x2c,0);
    iVar3 = iVar2;
    if (iVar2 == -1) {
      iVar3 = *(int *)(param_1 + 0x10);
    }
    if (param_2 != 0) {
      if (iVar3 == *(int *)(param_2 + 0x10)) {
        iVar3 = System_String__Compare(param_1,0,param_2,0,iVar3,4,0);
        if (iVar2 == -1) {
          return iVar3 == 0;
        }
        if (iVar3 != 0) {
          return iVar3 == 0;
        }
        do {
          iVar2 = iVar2 + 1;
          uVar4 = System_String__get_Chars(param_1,iVar2,0);
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09535460);
          }
          uVar5 = System_Char__IsWhiteSpace(uVar4,0);
        } while ((uVar5 & 1) != 0);
        uVar6 = System_String__Substring(param_1,iVar2,0);
        lVar7 = thunk_FUN_03f9944c(DAT_09181610);
        System_Reflection_AssemblyName___ctor(lVar7,uVar6,0);
        if ((lVar7 == 0) || (param_3 == 0)) goto LAB_074d80c0;
        iVar2 = System_String__Compare
                          (*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(param_3 + 0x10),5,0);
        if (iVar2 == 0) {
          iVar2 = System_String__Compare(*(undefined8 *)(lVar7 + 0x10),DAT_0921f960,5,0);
          if (iVar2 == 0) {
            return true;
          }
          plVar8 = *(long **)(lVar7 + 0x30);
          if ((plVar8 != (long *)0x0) && (*(long *)(param_3 + 0x30) != 0)) {
            iVar2 = (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
            plVar8 = *(long **)(param_3 + 0x30);
            if (plVar8 == (long *)0x0) goto LAB_074d80c0;
            iVar3 = (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
            if (iVar2 != iVar3) {
              return false;
            }
          }
          lVar7 = System_Reflection_AssemblyName__GetPublicKeyToken(lVar7,0);
          lVar9 = System_Reflection_AssemblyName__GetPublicKeyToken(param_3,0);
          if (lVar7 == 0) {
            return true;
          }
          if (lVar9 == 0) {
            return true;
          }
          iVar2 = *(int *)(lVar7 + 0x18);
          if (iVar2 == *(int *)(lVar9 + 0x18)) {
            if (iVar2 < 1) {
              return true;
            }
            pcVar10 = (char *)(lVar9 + 0x20);
            pcVar11 = (char *)(lVar7 + 0x20);
            do {
              iVar2 = iVar2 + -1;
              bVar1 = *pcVar11 == *pcVar10;
              if (!bVar1) {
                return bVar1;
              }
              pcVar10 = pcVar10 + 1;
              pcVar11 = pcVar11 + 1;
            } while (iVar2 != 0);
            return bVar1;
          }
        }
      }
      return false;
    }
  }
LAB_074d80c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

