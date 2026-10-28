// rea decompile_all
// name: MessagePack.SkipClrVisibilityChecks$$EmitMagicAttribute
// address: 0x73a32d0
// body: available
// range: 0x73a32d0-0x73a36bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a36ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a36b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a36bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_SkipClrVisibilityChecks__EmitMagicAttribute(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 local_58 [4];
  undefined4 local_54;
  
  if ((DAT_09520b65 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181858);
    FUN_03f5c2a4(&DAT_09170f60);
    FUN_03f5c2a4(&DAT_09183038);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_091803c8);
    FUN_03f5c2a4(&DAT_0918ad80);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_0920e140);
    FUN_03f5c2a4(&DAT_09217a90);
    DAT_09520b65 = 1;
  }
  uVar1 = DAT_09170f60;
  lVar8 = *(long *)(param_1 + 0x18);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
  if (lVar8 != 0) {
    lVar8 = System_Reflection_Emit_ModuleBuilder__DefineType(lVar8,DAT_0920e140,0,uVar1,0);
    if (*(int *)(DAT_0918ad80 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918ad80);
    }
    uVar1 = *(undefined8 *)(*(long *)(DAT_0918ad80 + 0xb8) + 8);
    plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
    local_54 = 1;
    lVar3 = FUN_03f5c42c(DAT_09181858,&local_54);
    if (plVar2 != (long *)0x0) {
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_073a36b4:
        uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar1,0);
      }
      if ((int)plVar2[3] == 0) {
LAB_073a36b0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar2[4] = lVar3;
      thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
      plVar5 = (long *)FUN_03f5c394(DAT_091803c8,1);
      if (plVar5 != (long *)0x0) {
        lVar3 = *(long *)(*(long *)(DAT_0918ad80 + 0xb8) + 0x10);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
        goto LAB_073a36b4;
        if ((int)plVar5[3] == 0) goto LAB_073a36b0;
        plVar5[4] = lVar3;
        thunk_FUN_03f5d7b8(plVar5 + 4,lVar3);
        plVar6 = (long *)FUN_03f5c394(DAT_09180318,1);
        local_58[0] = 0;
        lVar3 = FUN_03f5c42c(DAT_09535400,local_58);
        if (plVar6 != (long *)0x0) {
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
          goto LAB_073a36b4;
          if ((int)plVar6[3] == 0) goto LAB_073a36b0;
          plVar6[4] = lVar3;
          thunk_FUN_03f5d7b8(plVar6 + 4,lVar3);
          uVar7 = thunk_FUN_03f9944c(DAT_09183038);
          System_Reflection_Emit_CustomAttributeBuilder___ctor(uVar7,uVar1,plVar2,plVar5,plVar6,0);
          if (lVar8 != 0) {
            System_Reflection_Emit_TypeBuilder__SetCustomAttribute(lVar8,uVar7,0);
            plVar2 = (long *)FUN_03f5c394(DAT_09180748,1);
            lVar3 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
            if (plVar2 != (long *)0x0) {
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
              goto LAB_073a36b4;
              if ((int)plVar2[3] == 0) goto LAB_073a36b0;
              plVar2[4] = lVar3;
              thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
              lVar3 = System_Reflection_Emit_TypeBuilder__DefineConstructor(lVar8,0x1886,1,plVar2,0)
              ;
              if (lVar3 != 0) {
                System_Reflection_Emit_ConstructorBuilder__DefineParameter(lVar3,1,0,DAT_09217a90,0)
                ;
                plVar2 = (long *)System_Reflection_Emit_ConstructorBuilder__GetILGenerator(lVar3,0);
                if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188c40);
                }
                if (plVar2 != (long *)0x0) {
                  (**(code **)(*plVar2 + 0x198))
                            (plVar2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x10),
                             *(undefined8 *)(*plVar2 + 0x1a0));
                  (**(code **)(*plVar2 + 0x1e8))
                            (plVar2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x138),
                             **(undefined8 **)(DAT_0918ad80 + 0xb8),*(undefined8 *)(*plVar2 + 0x1f0)
                            );
                  (**(code **)(*plVar2 + 0x198))
                            (plVar2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x148),
                             *(undefined8 *)(*plVar2 + 0x1a0));
                  System_Reflection_Emit_TypeBuilder__CreateTypeInfo(lVar8,0);
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
  FUN_03f5c550();
}

