// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseError
// address: 0x74c2a28
// body: available
// range: 0x74c2a28-0x74c2c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c2a78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c2b44 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c2c70 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseError
               (undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar1 = thunk_FUN_03fc39d4(&DAT_09180318);
  uVar1 = FUN_03f5c394(uVar1,1);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091805f8);
  lVar3 = FUN_03f5c394(uVar2,7);
  if ((param_3 != 0) && (lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_3 + 0x28);
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20));
      uVar2 = thunk_FUN_03fc39d4(&DAT_091f5a98);
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = uVar2;
        thunk_FUN_03f5d7b8();
        local_34 = *(undefined4 *)(param_3 + 0x10);
        uVar2 = thunk_FUN_03fc39d4(&DAT_09186ff8);
        plVar4 = (long *)FUN_03f5c42c(uVar2,&local_34);
        uVar2 = thunk_FUN_03fc39d4(&DAT_0920a500);
        if (plVar4 == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        }
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = uVar5;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30));
          uVar5 = thunk_FUN_03fc39d4(&DAT_091f5a98);
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = uVar5;
            thunk_FUN_03f5d7b8();
            if (param_2 == 0) goto LAB_074c2a78;
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(param_2 + 0x28);
              thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x40));
              uVar5 = thunk_FUN_03fc39d4(&DAT_091f5a98);
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = uVar5;
                thunk_FUN_03f5d7b8();
                local_38 = *(undefined4 *)(param_2 + 0x10);
                uVar5 = thunk_FUN_03fc39d4(&DAT_09186ff8);
                plVar4 = (long *)FUN_03f5c42c(uVar5,&local_38);
                if (plVar4 == (long *)0x0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                }
                FUN_039b1d98(lVar3);
                FUN_039af17c(lVar3,6,uVar5);
                uVar5 = System_String__Concat(lVar3,0);
                FUN_039b1d98(uVar1);
                FUN_039b0da0(uVar1,uVar5);
                FUN_039af17c(uVar1,0,uVar5);
                uVar1 = System_Environment__GetResourceString(uVar2,uVar1,0);
                thunk_FUN_03fc39d4(&DAT_0918a948);
                uVar2 = thunk_FUN_03f9944c();
                System_Runtime_Serialization_SerializationException___ctor(uVar2,uVar1,0);
                uVar1 = thunk_FUN_03fc39d4(&DAT_091d5060);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar2,uVar1);
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_074c2a78:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

