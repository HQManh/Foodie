// rea decompile_all
// name: System.Runtime.Remoting.ConfigHandler$$ReadPreload
// address: 0x74851a0
// body: available
// range: 0x74851a0-0x748540b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7485368 to 0x74861d0 System.Runtime.Remoting.SoapServices$$PreLoad (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74853a0 to 0x74866ac System.Runtime.Remoting.SoapServices$$PreLoad (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74853a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7485408 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_ConfigHandler__ReadPreload(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_0952127f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5c80);
    FUN_03f5c2a4(&DAT_09194970);
    FUN_03f5c2a4(&DAT_0918ae10);
    FUN_03f5c2a4(&DAT_091dc128);
    FUN_03f5c2a4(&DAT_09217a80);
    FUN_03f5c2a4(&DAT_09224510);
    DAT_0952127f = 1;
  }
  uVar2 = DAT_09224510;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_09194970) {
        puVar1 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_0748527c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09194970,3);
LAB_0748527c:
  lVar5 = (*(code *)*puVar1)(param_2,uVar2,puVar1[1]);
  uVar2 = DAT_09217a80;
  lVar6 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_09194970) {
        puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_074852e4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09194970,3);
LAB_074852e4:
  lVar6 = (*(code *)*puVar1)(param_2,uVar2,puVar1[1]);
  if ((lVar5 == 0) || (lVar6 == 0)) {
    if (lVar5 != 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = FUN_03f5c738(lVar5,DAT_091dc128,DAT_091c5c80);
      if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918ae10);
      }
      System_Runtime_Remoting_SoapServices__PreLoad(uVar2);
      return;
    }
    if (lVar6 != 0) {
      uVar2 = System_Reflection_Assembly__Load(lVar6,0);
      if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918ae10);
      }
      System_Runtime_Remoting_SoapServices__PreLoad(uVar2);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09189ec8);
    uVar2 = thunk_FUN_03f9944c();
    puVar3 = &DAT_092011c8;
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09189ec8);
    uVar2 = thunk_FUN_03f9944c();
    puVar3 = &DAT_092111d0;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar3);
  System_Runtime_Remoting_RemotingException___ctor(uVar2,uVar4);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091c5c80);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar4);
}

