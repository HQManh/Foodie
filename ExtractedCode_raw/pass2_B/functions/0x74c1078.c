// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo$$GetMemberType
// address: 0x74c1078
// body: available
// range: 0x74c1078-0x74c11e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c11e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__GetMemberType
               (undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((DAT_09521491 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184518);
    FUN_03f5c2a4(&DAT_09189788);
    DAT_09521491 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar3 = *param_2;
    if ((*(byte *)(lVar3 + 0x130) < *(byte *)(DAT_09184518 + 0x130)) ||
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(DAT_09184518 + 0x130) * 8 + -8) !=
        DAT_09184518)) {
      if ((*(byte *)(lVar3 + 0x130) < *(byte *)(DAT_09189788 + 0x130)) ||
         (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 + -8) !=
          DAT_09189788)) goto LAB_074c1140;
      puVar5 = (undefined8 *)(lVar3 + 600);
      puVar4 = (undefined8 *)(lVar3 + 0x260);
    }
    else {
      puVar5 = (undefined8 *)(lVar3 + 0x268);
      puVar4 = (undefined8 *)(lVar3 + 0x270);
    }
                    /* WARNING: Could not recover jumptable at 0x074c1130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar5)(param_2,*puVar4);
    return;
  }
LAB_074c1140:
  uVar1 = thunk_FUN_03fc39d4(&DAT_09180318);
  uVar1 = FUN_03f5c394(uVar1,1);
  FUN_039b1d98(param_2);
  uVar2 = System_Object__GetType(param_2,0);
  FUN_039b1d98(uVar1);
  FUN_039b0da0(uVar1,uVar2);
  FUN_039af17c(uVar1,0,uVar2);
  uVar2 = thunk_FUN_03fc39d4(&DAT_09207ab8);
  uVar1 = System_Environment__GetResourceString(uVar2,uVar1,0);
  thunk_FUN_03fc39d4(&DAT_0918a948);
  uVar2 = thunk_FUN_03f9944c();
  System_Runtime_Serialization_SerializationException___ctor(uVar2,uVar1,0);
  uVar1 = thunk_FUN_03fc39d4(&DAT_091d6f28);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar1);
}

