// rea decompile_all
// name: System.Runtime.Remoting.RemotingServices$$CreateClientActivatedServerIdentity
// address: 0x7488c84
// body: available
// range: 0x7488c84-0x7488d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7488d2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_RemotingServices__CreateClientActivatedServerIdentity
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_095212a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091825a8);
    FUN_03f5c2a4(&DAT_09182b00);
    FUN_03f5c2a4(&DAT_09185f70);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_095212a3 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091825a8);
  System_Runtime_Remoting_ServerIdentity___ctor(lVar1,param_3,0,param_2);
  if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Runtime_Remoting_Contexts_Context__get_DefaultContext(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar3 = (long *)System_Runtime_Remoting_ServerIdentity__AttachServerObject(lVar1,param_1,uVar2);
  if ((DAT_09521295 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_091d7420);
    FUN_03f5c2a4(&DAT_09189ed8);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091dc128);
    DAT_09521295 = 1;
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_091860a8) {
        puVar4 = (undefined8 *)(lVar1 + (long)(*piVar9 + 6) * 0x10 + 0x138);
        goto LAB_07488dfc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091860a8,6);
LAB_07488dfc:
  uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar2 = FUN_03f5c738(uVar2,DAT_091dc128,DAT_091d7420);
  uVar8 = System_Type__op_Equality(uVar2,0,0);
  if ((uVar8 & 1) != 0) {
    FUN_039b1d98(plVar3);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091860a8);
    uVar2 = FUN_039afee4(6,uVar2,plVar3);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09211138);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091f7868);
    uVar2 = System_String__Concat(uVar5,uVar2,uVar7,0);
    thunk_FUN_03fc39d4(&DAT_09189ec8);
    uVar5 = thunk_FUN_03f9944c();
    System_Runtime_Remoting_RemotingException___ctor(uVar5,uVar2);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091d7420);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar2);
  }
  lVar1 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_091860a8) {
        puVar4 = (undefined8 *)(lVar1 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_07488eac;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091860a8,4);
LAB_07488eac:
  uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  lVar1 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_091860a8) {
        puVar4 = (undefined8 *)(lVar1 + (long)(*piVar9 + 5) * 0x10 + 0x138);
        goto LAB_07488f14;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091860a8,5);
LAB_07488f14:
  lVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189ed8);
  }
  uVar7 = DAT_09180748;
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = thunk_FUN_03f99350(lVar1,DAT_09180748);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar1,uVar7);
    }
  }
  System_Runtime_Remoting_RemotingServices__GetMethodBaseFromName(uVar2,uVar5,lVar6);
  return;
}

