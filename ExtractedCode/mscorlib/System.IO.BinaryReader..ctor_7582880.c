// rea decompile_all
// name: System.IO.BinaryReader$$.ctor
// address: 0x7582880
// body: available
// range: 0x7582880-0x7582b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7582ab8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7582b08 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7582b0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_BinaryReader___ctor(long param_1,long *param_2,long *param_3,byte param_4)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  if ((DAT_09521af5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_091723b8);
    FUN_03f5c2a4(&DAT_0918c640);
    DAT_09521af5 = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_2 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    puVar8 = &DAT_0921d578;
  }
  else {
    if (param_3 != (long *)0x0) {
      uVar5 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      if ((uVar5 & 1) == 0) {
        uVar6 = thunk_FUN_03fc39d4(&DAT_0920dbe0);
        uVar6 = System_Environment__GetResourceString(uVar6,0);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar7 = thunk_FUN_03f9944c();
        System_ArgumentException___ctor(uVar7,uVar6,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091c3da8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar7,uVar6);
      }
      *(long *)(param_1 + 0x10) = (long)param_2;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x10),param_2);
      uVar6 = (**(code **)(*param_3 + 0x328))(param_3,*(undefined8 *)(*param_3 + 0x330));
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      thunk_FUN_03f5d7b8();
      uVar3 = (**(code **)(*param_3 + 0x358))(param_3,0x80,*(undefined8 *)(*param_3 + 0x360));
      *(undefined4 *)(param_1 + 0x40) = uVar3;
      iVar4 = (**(code **)(*param_3 + 0x348))(param_3,1,*(undefined8 *)(*param_3 + 0x350));
      if (iVar4 < 0x11) {
        iVar4 = 0x10;
      }
      uVar6 = FUN_03f5c394(DAT_0917fc88,iVar4);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      thunk_FUN_03f5d7b8();
      if (*(byte *)(*param_3 + 0x130) < *(byte *)(DAT_0918c640 + 0x130)) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(DAT_0918c640 + 0x130) * 8 +
                         -8) == DAT_0918c640;
      }
      *(bool *)(param_1 + 0x44) = bVar1;
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar7 = System_Object__GetType(*(long *)(param_1 + 0x10),0);
        uVar6 = DAT_091723b8;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
        bVar2 = System_Type__op_Equality(uVar7,uVar6,0);
        *(byte *)(param_1 + 0x46) = param_4 & 1;
        *(byte *)(param_1 + 0x45) = bVar2 & 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    puVar8 = &DAT_0921af60;
  }
  uVar7 = thunk_FUN_03fc39d4(puVar8);
  System_ArgumentNullException___ctor(uVar6,uVar7,0);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091c3da8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar7);
}

