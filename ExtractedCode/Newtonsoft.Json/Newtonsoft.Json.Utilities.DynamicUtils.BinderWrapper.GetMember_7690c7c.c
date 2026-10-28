// rea decompile_all
// name: Newtonsoft.Json.Utilities.DynamicUtils.BinderWrapper$$GetMember
// address: 0x7690c7c
// body: available
// range: 0x7690c7c-0x7690e73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7690e5c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7690e68 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7690e6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7690e70 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper__GetMember(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_34;
  
  if ((DAT_0952259a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09190450);
    FUN_03f5c2a4(&DAT_091822c0);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_0952259a = 1;
  }
  Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper__Init();
  lVar5 = *(long *)(*(long *)(DAT_09190450 + 0xb8) + 0x10);
  plVar1 = (long *)FUN_03f5c394(DAT_09180318,4);
  local_34 = 0;
  lVar2 = FUN_03f5c42c(DAT_09535420,&local_34);
  if (plVar1 == (long *)0x0) {
LAB_07690e6c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_07690e60:
    uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
    if ((param_1 != 0) &&
       (lVar2 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
    goto LAB_07690e60;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = param_1;
      thunk_FUN_03f5d7b8(plVar1 + 5,param_1);
      if ((param_2 != 0) &&
         (lVar2 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
      goto LAB_07690e60;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = param_2;
        thunk_FUN_03f5d7b8(plVar1 + 6,param_2);
        lVar2 = **(long **)(DAT_09190450 + 0xb8);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
        goto LAB_07690e60;
        if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
          plVar1[7] = lVar2;
          thunk_FUN_03f5d7b8(plVar1 + 7,lVar2);
          if (lVar5 != 0) {
            plVar1 = (long *)(**(code **)(lVar5 + 0x18))
                                       (*(undefined8 *)(lVar5 + 0x40),0,plVar1,
                                        *(undefined8 *)(lVar5 + 0x28));
            if (plVar1 != (long *)0x0) {
              if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_091822c0 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_091822c0 + 0x130) * 8 +
                           -8) != DAT_091822c0)) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0();
              }
            }
            return;
          }
          goto LAB_07690e6c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

