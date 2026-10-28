// rea decompile_all
// name: System.Globalization.DateTimeFormatInfoScanner$$ArrayElementsBeginWithDigit
// address: 0x7508374
// body: available
// range: 0x7508374-0x75085c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750849c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75085c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Globalization_DateTimeFormatInfoScanner__ArrayElementsBeginWithDigit(long param_1)

{
  int iVar1;
  short sVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  
  if (param_1 != 0) {
    uVar4 = *(uint *)(param_1 + 0x18);
    if (0 < (int)uVar4) {
      uVar7 = 0;
      lVar3 = param_1;
      do {
        if (uVar4 <= uVar7) goto LAB_0750849c;
        plVar8 = (long *)(param_1 + (long)(int)uVar7 * 8 + 0x20);
        lVar3 = *plVar8;
        if (lVar3 == 0) goto LAB_075085c0;
        if ((0 < *(int *)(lVar3 + 0x10)) &&
           (lVar3 = System_String__get_Chars(lVar3,0,0), 0x2f < ((uint)lVar3 & 0xffff))) {
          if (*(uint *)(param_1 + 0x18) <= uVar7) goto LAB_0750849c;
          if (*plVar8 == 0) goto LAB_075085c0;
          lVar3 = System_String__get_Chars(*plVar8,0,0);
          if (((uint)lVar3 & 0xffff) < 0x3a) {
            uVar5 = *(undefined8 *)(param_1 + 0x18);
            if ((uint)uVar5 <= uVar7) goto LAB_0750849c;
            iVar6 = 2;
            goto LAB_07508430;
          }
        }
        uVar4 = *(uint *)(param_1 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar4);
    }
    return 0;
  }
LAB_075085c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    lVar3 = System_String__get_Chars(lVar3,iVar1,0);
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x18);
    if (((uint)lVar3 & 0xffff) < 0x30) goto LAB_075084a0;
    if (uVar4 <= uVar7) break;
    if (*plVar8 == 0) goto LAB_075085c0;
    lVar3 = System_String__get_Chars(*plVar8,iVar1,0);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = (uint)uVar5;
    if (0x39 < ((uint)lVar3 & 0xffff)) goto LAB_075084a0;
    iVar6 = iVar6 + 1;
    if (uVar4 <= uVar7) break;
LAB_07508430:
    uVar4 = (uint)uVar5;
    lVar3 = *plVar8;
    if (lVar3 == 0) goto LAB_075085c0;
    iVar1 = iVar6 + -1;
    if (*(int *)(lVar3 + 0x10) <= iVar1) {
LAB_075084a0:
      if (uVar4 <= uVar7) break;
      lVar3 = *plVar8;
      if (lVar3 == 0) goto LAB_075085c0;
      if (iVar6 - *(int *)(lVar3 + 0x10) == 1) {
        return 0;
      }
      if (iVar6 == *(int *)(lVar3 + 0x10)) {
        sVar2 = System_String__get_Chars(lVar3,iVar1,0);
        lVar3 = 0;
        if (sVar2 == 0x6708) {
          return 0;
        }
        if (sVar2 == -0x392c) {
          return 0;
        }
        uVar4 = *(uint *)(param_1 + 0x18);
      }
      if (uVar4 <= uVar7) break;
      lVar3 = *plVar8;
      if (lVar3 == 0) goto LAB_075085c0;
      if ((iVar6 - *(int *)(lVar3 + 0x10) == -3) &&
         (lVar3 = System_String__get_Chars(lVar3,iVar1,0), ((uint)lVar3 & 0xffff) == 0x27)) {
        if (*(uint *)(param_1 + 0x18) <= uVar7) break;
        if (*plVar8 == 0) goto LAB_075085c0;
        lVar3 = System_String__get_Chars(*plVar8,iVar6,0);
        if (((uint)lVar3 & 0xffff) == 0x20) {
          if (*(uint *)(param_1 + 0x18) <= uVar7) break;
          if (*plVar8 == 0) goto LAB_075085c0;
          lVar3 = System_String__get_Chars(*plVar8,iVar6 + 1,0);
          if (((uint)lVar3 & 0xffff) == 0x6708) {
            if (*(uint *)(param_1 + 0x18) <= uVar7) break;
            if (*plVar8 == 0) goto LAB_075085c0;
            sVar2 = System_String__get_Chars(*plVar8,iVar6 + 2,0);
            if (sVar2 == 0x27) {
              return 0;
            }
          }
        }
      }
      return 1;
    }
  }
LAB_0750849c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558(lVar3);
}

