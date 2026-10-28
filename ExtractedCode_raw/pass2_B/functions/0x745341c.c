// rea decompile_all
// name: System.Security.Util.Tokenizer.StringMaker$$MakeString
// address: 0x745341c
// body: available
// range: 0x745341c-0x7453667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74535f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7453664 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Security_Util_Tokenizer_StringMaker__MakeString(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  if ((DAT_09521136 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_09521136 = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar9 = *(uint *)(param_1 + 0x18);
    if ((uVar9 >> 2) * 2 + (uVar9 >> 2) < *(uint *)(param_1 + 0x1c)) {
      uVar9 = uVar9 * 2;
      lVar5 = FUN_03f5c394(DAT_091805f8,uVar9);
      uVar6 = (ulong)*(uint *)(param_1 + 0x18);
      if (*(uint *)(param_1 + 0x18) != 0) {
        lVar11 = 0;
        uVar10 = 0;
        do {
          lVar8 = *(long *)(param_1 + 0x10);
          if (lVar8 == 0) goto LAB_074535f4;
          if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_07453664;
          if (*(long *)(lVar8 + lVar11 * 8 + 0x20) != 0) {
            uVar3 = System_Security_Util_Tokenizer_StringMaker__HashString();
            if (lVar5 == 0) goto LAB_074535f4;
            uVar7 = 0;
            if (uVar9 != 0) {
              uVar7 = uVar3 / uVar9;
            }
            uVar3 = uVar3 - uVar7 * uVar9;
            while( true ) {
              uVar7 = uVar3;
              if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_07453664;
              plVar4 = (long *)(lVar5 + (ulong)uVar7 * 8 + 0x20);
              if (*plVar4 == 0) break;
              uVar3 = 0;
              if (uVar7 + 1 < uVar9) {
                uVar3 = uVar7 + 1;
              }
            }
            lVar8 = *(long *)(param_1 + 0x10);
            if (lVar8 == 0) goto LAB_074535f4;
            if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_07453664;
            *plVar4 = *(long *)(lVar8 + lVar11 * 8 + 0x20);
            thunk_FUN_03f5d7b8(lVar5 + 0x20 + (ulong)uVar7 * 8);
            uVar6 = (ulong)*(uint *)(param_1 + 0x18);
          }
          uVar10 = uVar10 + 1;
          lVar11 = (long)(int)uVar10;
        } while (lVar11 < (long)uVar6);
      }
      *(long *)(param_1 + 0x10) = lVar5;
      *(uint *)(param_1 + 0x18) = uVar9;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x10),lVar5);
    }
    uVar6 = System_Security_Util_Tokenizer_StringMaker__HashCharArray(uVar1,uVar2);
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      uVar9 = *(uint *)(param_1 + 0x18);
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = (uint)uVar6 / uVar9;
      }
      uVar9 = (uint)uVar6 - uVar10 * uVar9;
      do {
        if (*(uint *)(lVar5 + 0x18) <= uVar9) {
LAB_07453664:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = *(long *)(lVar5 + (ulong)uVar9 * 8 + 0x20);
        if (lVar5 == 0) {
          lVar5 = System_String__CreateString(0,uVar1,0,uVar2,0);
          lVar11 = *(long *)(param_1 + 0x10);
          if (lVar11 != 0) {
            if (uVar9 < *(uint *)(lVar11 + 0x18)) {
              plVar4 = (long *)(lVar11 + (ulong)uVar9 * 8 + 0x20);
              *plVar4 = lVar5;
              thunk_FUN_03f5d7b8(plVar4,lVar5);
              *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
              return lVar5;
            }
            goto LAB_07453664;
          }
          break;
        }
        uVar6 = System_Security_Util_Tokenizer_StringMaker__CompareStringAndChars
                          (uVar6,lVar5,uVar1,uVar2);
        if ((uVar6 & 1) != 0) {
          return lVar5;
        }
        lVar5 = *(long *)(param_1 + 0x10);
        uVar10 = 0;
        if (uVar9 + 1 < *(uint *)(param_1 + 0x18)) {
          uVar10 = uVar9 + 1;
        }
        uVar9 = uVar10;
      } while (lVar5 != 0);
    }
  }
  else {
    System_Text_StringBuilder__Append(*(long *)(param_1 + 0x20),uVar1,0,uVar2,0);
    plVar4 = *(long **)(param_1 + 0x20);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07453498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return lVar5;
    }
  }
LAB_074535f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

