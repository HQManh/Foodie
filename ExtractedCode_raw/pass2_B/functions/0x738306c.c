// rea decompile_all
// name: MessagePack.TinyJsonReader$$ReadValue
// address: 0x738306c
// body: available
// range: 0x738306c-0x73832ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7383150 to 0x7383854 MessagePack.TinyJsonReader$$ReadString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73831cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73831e0 to 0x73834d0 MessagePack.TinyJsonReader$$ReadNumber (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73832f8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73832fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_TinyJsonReader__ReadValue(long param_1)

{
  int iVar1;
  short sVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (iVar1 < 5) {
    if (iVar1 - 1U < 4) {
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
                    /* WARNING: Could not recover jumptable at 0x073830b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
      return;
    }
    if (iVar1 != 0) {
LAB_07383158:
      local_38 = thunk_FUN_03fc39d4(&DAT_0918be50);
      uStack_30 = 0xffffffffffffffff;
      local_28 = iVar1;
      uVar4 = System_Enum__ToString(&local_38,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_09205c38);
      uVar4 = System_String__Concat(uVar5,uVar4,0);
      thunk_FUN_03fc39d4(&DAT_09188180);
      uVar5 = thunk_FUN_03f9944c();
      MessagePack_MessagePackSerializationException___ctor(uVar5,uVar4);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091db860);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar4);
    }
  }
  else {
    if (iVar1 < 7) {
      if (iVar1 == 5) {
        MessagePack_TinyJsonReader__ReadNumber(param_1);
        return;
      }
      if (iVar1 == 6) {
        MessagePack_TinyJsonReader__ReadString(param_1);
        return;
      }
      goto LAB_07383158;
    }
    if (iVar1 == 7) {
      sVar2 = MessagePack_TinyJsonReader__ReadChar(param_1);
      if ((((sVar2 != 0x74) ||
           (sVar2 = MessagePack_TinyJsonReader__ReadChar(param_1), sVar2 != 0x72)) ||
          (sVar2 = MessagePack_TinyJsonReader__ReadChar(param_1), sVar2 != 0x75)) ||
         (sVar2 = MessagePack_TinyJsonReader__ReadChar(param_1), sVar2 != 0x65)) goto LAB_073832b8;
      uVar6 = 1;
    }
    else {
      if (iVar1 != 8) {
        if (iVar1 != 9) goto LAB_07383158;
        sVar2 = MessagePack_TinyJsonReader__ReadChar(param_1);
        if (((sVar2 == 0x6e) &&
            (sVar2 = MessagePack_TinyJsonReader__ReadChar(param_1), sVar2 == 0x75)) &&
           ((sVar2 = MessagePack_TinyJsonReader__ReadChar(param_1), sVar2 == 0x6c &&
            (sVar2 = MessagePack_TinyJsonReader__ReadChar(param_1), sVar2 == 0x6c)))) {
          *(undefined1 *)(param_1 + 0x2c) = 0;
          return;
        }
LAB_073832b8:
        thunk_FUN_03fc39d4(&DAT_0918be40);
        uVar4 = thunk_FUN_03f9944c();
        uVar5 = thunk_FUN_03fc39d4(&DAT_09205388);
        MessagePack_TinyJsonException___ctor(uVar4,uVar5);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091db860);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar5);
      }
      sVar2 = MessagePack_TinyJsonReader__ReadChar(param_1);
      if (((sVar2 != 0x66) || (sVar2 = MessagePack_TinyJsonReader__ReadChar(param_1), sVar2 != 0x61)
          ) || ((sVar2 = MessagePack_TinyJsonReader__ReadChar(param_1), sVar2 != 0x6c ||
                ((sVar2 = MessagePack_TinyJsonReader__ReadChar(param_1), sVar2 != 0x73 ||
                 (sVar2 = MessagePack_TinyJsonReader__ReadChar(param_1), sVar2 != 0x65))))))
      goto LAB_073832b8;
      uVar6 = 2;
    }
    *(undefined1 *)(param_1 + 0x2c) = uVar6;
  }
  return;
}

