// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder.EmitInfo.MessagePackFormatterAttr$$.cctor
// address: 0x73cfb44
// body: available
// range: 0x73cfb44-0x73cfeb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73cfe98 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73cfe9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cfea4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cfea8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cfeb4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder_EmitInfo_MessagePackFormatterAttr___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((DAT_09520cba & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cbf68);
    FUN_03f5c2a4(&DAT_091cbf70);
    FUN_03f5c2a4(&DAT_091cbba0);
    FUN_03f5c2a4(&DAT_091cbb98);
    FUN_03f5c2a4(&DAT_091843a0);
    FUN_03f5c2a4(&DAT_09196748);
    FUN_03f5c2a4(&DAT_091d3450);
    FUN_03f5c2a4(&DAT_091d3458);
    FUN_03f5c2a4(&DAT_09172410);
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_09180368);
    FUN_03f5c2a4(&DAT_09217b90);
    DAT_09520cba = 1;
  }
  uVar1 = DAT_09172410;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
  if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091843a0);
  }
  lVar2 = System_Linq_Expressions_Expression__Parameter(uVar1,DAT_09217b90,0);
  plVar3 = (long *)System_Reflection_MethodBase__GetMethodFromHandle(DAT_091d3458,0);
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
        DAT_09188228)) goto LAB_073cfea0;
  }
  uVar1 = System_Linq_Expressions_Expression__Property(lVar2,plVar3,0);
  plVar3 = (long *)FUN_03f5c394(DAT_09180368,1);
  if (plVar3 != (long *)0x0) {
    if ((lVar2 != 0) &&
       (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_073cfeac:
      uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar1,0);
    }
    if ((int)plVar3[3] == 0) {
LAB_073cfea8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar3[4] = lVar2;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
    uVar1 = FUN_04b212ac(uVar1,plVar3,DAT_091cbba0);
    lVar2 = FUN_04b24e74(uVar1,DAT_091cbf70);
    if (lVar2 != 0) {
      uVar1 = System_Reflection_PropertyInfo__GetGetMethod(lVar2,0);
      **(undefined8 **)(DAT_09196748 + 0xb8) = uVar1;
      thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09196748 + 0xb8),uVar1);
      uVar1 = System_Type__GetTypeFromHandle(DAT_09172410,0);
      lVar2 = System_Linq_Expressions_Expression__Parameter(uVar1,DAT_09217b90,0);
      plVar3 = (long *)System_Reflection_MethodBase__GetMethodFromHandle(DAT_091d3450,0);
      if (plVar3 != (long *)0x0) {
        if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
            DAT_09188228)) {
LAB_073cfea0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar3);
        }
      }
      uVar1 = System_Linq_Expressions_Expression__Property(lVar2,plVar3,0);
      plVar3 = (long *)FUN_03f5c394(DAT_09180368,1);
      if (plVar3 != (long *)0x0) {
        if ((lVar2 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_073cfeac;
        if ((int)plVar3[3] == 0) goto LAB_073cfea8;
        plVar3[4] = lVar2;
        thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
        uVar1 = FUN_04b212ac(uVar1,plVar3,DAT_091cbb98);
        lVar2 = FUN_04b24e74(uVar1,DAT_091cbf68);
        if (lVar2 != 0) {
          uVar1 = System_Reflection_PropertyInfo__GetGetMethod(lVar2,0);
          puVar5 = (undefined8 *)(*(long *)(DAT_09196748 + 0xb8) + 8);
          *puVar5 = uVar1;
          thunk_FUN_03f5d7b8(puVar5,uVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

