// rea decompile_all
// name: MessagePack.TinyJsonReader$$ReadNextToken
// address: 0x7382e7c
// body: available
// range: 0x7382e7c-0x738306b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7382fe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7382ff8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7383068 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_TinyJsonReader__ReadNextToken(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined2 local_14 [10];
  
  while( true ) {
    if ((DAT_09520a22 & 1) == 0) {
      FUN_03f5c2a4(&DAT_091db848);
      DAT_09520a22 = 1;
    }
    local_14[0] = 0;
    MessagePack_TinyJsonReader__SkipWhiteSpace(param_1);
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 == (long *)0x0) break;
    uVar2 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    if (uVar2 == 0xffffffff) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      return;
    }
    if (0xffff < (int)uVar2) {
      uVar4 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,DAT_091db848);
    }
    uVar1 = uVar2 & 0xffff;
    local_14[0] = (undefined2)uVar2;
    if (0x66 < uVar1) {
      if (uVar1 < 0x75) {
        if (uVar1 == 0x6e) {
          uVar6 = 9;
        }
        else {
          if (uVar1 != 0x74) {
LAB_07382ffc:
            FUN_039afb80(DAT_09535460);
            uVar4 = System_Char__ToString(local_14,0);
            uVar5 = thunk_FUN_03fc39d4(&DAT_09205360);
            uVar4 = System_String__Concat(uVar5,uVar4,0);
            thunk_FUN_03fc39d4(&DAT_0918be40);
            uVar5 = thunk_FUN_03f9944c();
            MessagePack_TinyJsonException___ctor(uVar5,uVar4);
            uVar4 = thunk_FUN_03fc39d4(&DAT_091db848);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,uVar4);
          }
          uVar6 = 7;
        }
      }
      else if (uVar1 == 0x7d) {
        uVar6 = 2;
      }
      else {
        if (uVar1 != 0x7b) goto LAB_07382ffc;
        uVar6 = 1;
      }
      goto LAB_07382f70;
    }
    if (0x5b < uVar1) {
      if (uVar1 == 0x5d) {
        uVar6 = 4;
      }
      else {
        if (uVar1 != 0x66) goto LAB_07382ffc;
        uVar6 = 8;
      }
      goto LAB_07382f70;
    }
    if (uVar1 - 0x30 < 10) {
LAB_07382efc:
      uVar6 = 5;
LAB_07382f70:
      *(undefined4 *)(param_1 + 0x28) = uVar6;
      return;
    }
    if (uVar1 < 0x2d) {
      if (uVar1 == 0x22) {
        uVar6 = 6;
        goto LAB_07382f70;
      }
      if (uVar1 != 0x2c) goto LAB_07382ffc;
    }
    else {
      if (uVar1 == 0x2d) goto LAB_07382efc;
      if (uVar1 != 0x3a) {
        if (uVar1 != 0x5b) goto LAB_07382ffc;
        uVar6 = 3;
        goto LAB_07382f70;
      }
    }
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 == (long *)0x0) break;
    (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

