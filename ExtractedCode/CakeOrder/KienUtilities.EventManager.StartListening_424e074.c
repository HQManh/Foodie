// rea decompile_all
// name: KienUtilities.EventManager$$StartListening
// address: 0x424e074
// body: available
// range: 0x424e074-0x424e487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424e1b4 to 0x85f70f4 UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x424e480 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x424e484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void KienUtilities_EventManager__StartListening
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_44;
  
  if ((DAT_09516eb9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a0138);
    FUN_03f5c2a4(&DAT_09184240);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_092152a8);
    FUN_03f5c2a4(&DAT_091f6ef0);
    FUN_03f5c2a4(&DAT_09214950);
    FUN_03f5c2a4(&DAT_09216a48);
    FUN_03f5c2a4(&DAT_091f6ef8);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_0920ff08);
    FUN_03f5c2a4(&DAT_091f6ee0);
    DAT_09516eb9 = 1;
  }
  local_44 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_0920ff08,0);
    return;
  }
  if (*(int *)(DAT_09184240 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  KienUtilities_EventManager__StartListening(param_1,param_3,DAT_091f5700);
  uVar1 = System_String__op_Inequality(param_4,DAT_091f5700,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09184240 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(*(long *)(DAT_09184240 + 0xb8) + 0x30);
    uVar2 = System_String__Concat(param_1,DAT_09214950,param_4,0);
    if (lVar3 == 0) goto LAB_0424e484;
    FUN_06fd8454(lVar3,uVar2,param_3,DAT_091a0138);
  }
  lVar3 = FUN_03f5c394(DAT_091805f8,8);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = param_1;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20),param_1);
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = DAT_09216a48;
        thunk_FUN_03f5d7b8();
        if (param_2 == 0) goto LAB_0424e484;
        uVar2 = UnityEngine_Object__GetName(param_2,0);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = uVar2;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30),uVar2);
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = DAT_091f6ef8;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x38));
            uVar2 = UnityEngine_GameObject__get_tag(param_2,0);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = uVar2;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x40),uVar2);
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = DAT_091f6ef0;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x48));
                local_44 = UnityEngine_GameObject__get_layer(param_2,0);
                uVar2 = System_Int32__ToString(&local_44,0);
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x50) = uVar2;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x50),uVar2);
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar3 + 0x58) = DAT_091f6ee0;
                    thunk_FUN_03f5d7b8();
                    uVar2 = System_String__Concat(lVar3,0);
                    if (*(int *)(DAT_09184240 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_09184240);
                    }
                    KienUtilities_EventManager__StartListening(uVar2,param_3,DAT_091f5700);
                    uVar1 = System_String__op_Inequality(param_4,DAT_091f5700,0);
                    if ((uVar1 & 1) != 0) {
                      if (*(int *)(DAT_09184240 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      lVar3 = *(long *)(*(long *)(DAT_09184240 + 0xb8) + 0x30);
                      uVar2 = System_String__Concat(param_1,DAT_09214950,param_4,DAT_092152a8,0);
                      if (lVar3 == 0) goto LAB_0424e484;
                      FUN_06fd8454(lVar3,uVar2,param_3,DAT_091a0138);
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0424e484:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

