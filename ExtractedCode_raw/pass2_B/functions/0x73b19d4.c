// rea decompile_all
// name: MessagePack.Internal.AutomataDictionary.AutomataNode$$Add
// address: 0x73b19d4
// body: available
// range: 0x73b19d4-0x73b1c37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b1c10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b1c14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b1c28 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b1c34 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_Internal_AutomataDictionary_AutomataNode__Add(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_09520be6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0088);
    FUN_03f5c2a4(&DAT_091c0690);
    FUN_03f5c2a4(&DAT_091c0668);
    FUN_03f5c2a4(&DAT_091c0748);
    FUN_03f5c2a4(&DAT_091c0740);
    FUN_03f5c2a4(&DAT_091e5cb0);
    FUN_03f5c2a4(&DAT_0918e6f8);
    DAT_09520be6 = 1;
  }
  uVar1 = FUN_04df2344(*(undefined8 *)(param_1 + 0x30),0,*(undefined4 *)(param_1 + 0x38),param_2,
                       DAT_091c0088);
  lVar5 = *(long *)(param_1 + 0x28);
  if (-1 < (int)uVar1) {
    if (lVar5 == 0) goto LAB_073b1c10;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      return *(long *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
    }
    goto LAB_073b1c14;
  }
  if (lVar5 != 0) {
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 == *(int *)(lVar5 + 0x18)) {
      if (iVar4 == 0) {
        iVar4 = 4;
      }
      else {
        if (-1 < iVar4 + -0x40000000) goto LAB_073b1c18;
        iVar4 = iVar4 << 1;
      }
      FUN_0492e500((long *)(param_1 + 0x28),iVar4,DAT_091c0690);
      iVar4 = *(int *)(param_1 + 0x38);
      if (iVar4 == 0) {
        iVar4 = 4;
      }
      else {
        if (-1 < iVar4 + -0x40000000) goto LAB_073b1c18;
        iVar4 = iVar4 << 1;
      }
      FUN_049304a4((undefined8 *)(param_1 + 0x30),iVar4,DAT_091c0668);
      iVar4 = *(int *)(param_1 + 0x38);
    }
    if (iVar4 != 0x7fffffff) {
      *(int *)(param_1 + 0x38) = iVar4 + 1;
      lVar5 = thunk_FUN_03f9944c(DAT_0918e6f8);
      MessagePack_Internal_AutomataDictionary_AutomataNode___ctor(lVar5,param_2);
      iVar4 = *(int *)(param_1 + 0x38);
      if (iVar4 != -0x80000000) {
        plVar6 = *(long **)(param_1 + 0x28);
        if (plVar6 != (long *)0x0) {
          if ((lVar5 != 0) &&
             (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0)) {
            uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar3,0);
          }
          uVar1 = iVar4 - 1;
          if (uVar1 < *(uint *)(plVar6 + 3)) {
            plVar6[(long)(int)uVar1 + 4] = lVar5;
            thunk_FUN_03f5d7b8(plVar6 + (long)(int)uVar1 + 4,lVar5);
            iVar4 = *(int *)(param_1 + 0x38);
            if (iVar4 == -0x80000000) goto LAB_073b1c18;
            lVar2 = *(long *)(param_1 + 0x30);
            if (lVar2 == 0) goto LAB_073b1c10;
            if (iVar4 - 1U < *(uint *)(lVar2 + 0x18)) {
              uVar3 = *(undefined8 *)(param_1 + 0x28);
              *(undefined8 *)(lVar2 + (long)(int)(iVar4 - 1U) * 8 + 0x20) = param_2;
              FUN_04950db8(uVar3,0,iVar4,DAT_091c0748);
              FUN_04950e0c(*(undefined8 *)(param_1 + 0x30),0,*(undefined4 *)(param_1 + 0x38),
                           DAT_091c0740);
              return lVar5;
            }
          }
LAB_073b1c14:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        goto LAB_073b1c10;
      }
    }
LAB_073b1c18:
    uVar3 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,DAT_091e5cb0);
  }
LAB_073b1c10:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

