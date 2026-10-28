// rea decompile_all
// name: System.Runtime.Remoting.RemotingServices$$GetMethodBaseFromMethodMessage
// address: 0x7488d40
// body: available
// range: 0x7488d40-0x748901b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7488f5c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7488f84 to 0x748901c System.Runtime.Remoting.RemotingServices$$GetMethodBaseFromName (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7488f88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7489018 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_RemotingServices__GetMethodBaseFromMethodMessage(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_09521295 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_091d7420);
    FUN_03f5c2a4(&DAT_09189ed8);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091dc128);
    DAT_09521295 = 1;
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *param_1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_091860a8) {
        puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
        goto LAB_07488dfc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(param_1,DAT_091860a8,6);
LAB_07488dfc:
  uVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar2 = FUN_03f5c738(uVar2,DAT_091dc128,DAT_091d7420);
  uVar7 = System_Type__op_Equality(uVar2,0,0);
  if ((uVar7 & 1) != 0) {
    FUN_039b1d98(param_1);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091860a8);
    uVar2 = FUN_039afee4(6,uVar2,param_1);
    uVar3 = thunk_FUN_03fc39d4(&DAT_09211138);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091f7868);
    uVar2 = System_String__Concat(uVar3,uVar2,uVar5,0);
    thunk_FUN_03fc39d4(&DAT_09189ec8);
    uVar3 = thunk_FUN_03f9944c();
    System_Runtime_Remoting_RemotingException___ctor(uVar3,uVar2);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091d7420);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar2);
  }
  lVar6 = *param_1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_091860a8) {
        puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_07488eac;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(param_1,DAT_091860a8,4);
LAB_07488eac:
  uVar3 = (*(code *)*puVar1)(param_1,puVar1[1]);
  lVar6 = *param_1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_091860a8) {
        puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto LAB_07488f14;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(param_1,DAT_091860a8,5);
LAB_07488f14:
  lVar6 = (*(code *)*puVar1)(param_1,puVar1[1]);
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189ed8);
  }
  uVar5 = DAT_09180748;
  if (lVar6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = thunk_FUN_03f99350(lVar6,DAT_09180748);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar6,uVar5);
    }
  }
  System_Runtime_Remoting_RemotingServices__GetMethodBaseFromName(uVar2,uVar3,lVar4);
  return;
}

