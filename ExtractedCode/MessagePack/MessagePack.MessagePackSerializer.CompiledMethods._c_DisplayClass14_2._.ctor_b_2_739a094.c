// rea decompile_all
// name: MessagePack.MessagePackSerializer.CompiledMethods.<>c__DisplayClass14_2$$<.ctor>b__2
// address: 0x739a094
// body: available
// range: 0x739a094-0x739a27b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x739a264 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739a270 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739a274 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739a278 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackSerializer_CompiledMethods_<>c__DisplayClass14_2__<_ctor>b__2
               (long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_48;
  
  if ((DAT_09520b10 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_09520b10 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  plVar1 = (long *)FUN_03f5c394(DAT_09180318,4);
  if (plVar1 == (long *)0x0) {
LAB_0739a274:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((param_2 != 0) &&
     (lVar2 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_0739a268:
    uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = param_2;
    thunk_FUN_03f5d7b8(plVar1 + 4,param_2);
    if ((param_3 != 0) &&
       (lVar2 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
    goto LAB_0739a268;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = param_3;
      thunk_FUN_03f5d7b8(plVar1 + 5,param_3);
      if ((param_4 != 0) &&
         (lVar2 = thunk_FUN_03f99350(param_4,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
      goto LAB_0739a268;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = param_4;
        thunk_FUN_03f5d7b8(plVar1 + 6,param_4);
        local_48 = param_5;
        lVar2 = FUN_03f5c42c(DAT_09182348,&local_48);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
        goto LAB_0739a268;
        if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
          plVar1[7] = lVar2;
          thunk_FUN_03f5d7b8(plVar1 + 7,lVar2);
          if (lVar5 != 0) {
            plVar1 = (long *)System_Reflection_MethodBase__Invoke(lVar5,0,plVar1,0);
            if (plVar1 != (long *)0x0) {
              if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_0918b8c8 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_0918b8c8 + 0x130) * 8 +
                           -8) != DAT_0918b8c8)) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0();
              }
            }
            return;
          }
          goto LAB_0739a274;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

