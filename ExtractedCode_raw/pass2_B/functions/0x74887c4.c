// rea decompile_all
// name: System.Runtime.Remoting.ServerIdentity$$StartTrackingLifetime
// address: 0x74887c4
// body: available
// range: 0x74887c4-0x748896b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7488920 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7488968 to 0x74912d0 System.Runtime.Remoting.Lifetime.LifetimeServices$$TrackLifetime (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_ServerIdentity__StartTrackingLifetime(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_095212b0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185f70);
    FUN_03f5c2a4(&DAT_09187730);
    FUN_03f5c2a4(&DAT_09187870);
    DAT_095212b0 = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar5 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_09185f70) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_07488868;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185f70,1);
LAB_07488868:
  iVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
  if (iVar3 == 0) {
    return;
  }
  lVar5 = *param_2;
  bVar1 = *(byte *)(lVar5 + 0x130);
  uVar6 = (ulong)*(byte *)(DAT_09187730 + 0x130);
  if ((bVar1 < *(byte *)(DAT_09187730 + 0x130)) ||
     (*(long *)(*(long *)(lVar5 + 200) + uVar6 * 8 + -8) != DAT_09187730)) {
    param_2 = (long *)thunk_FUN_03f9944c(DAT_09187730);
    System_Runtime_Remoting_Lifetime_Lease___ctor();
    if (param_2 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
      goto LAB_07488938;
    }
    lVar5 = *param_2;
    bVar1 = *(byte *)(lVar5 + 0x130);
    uVar6 = (ulong)*(byte *)(DAT_09187730 + 0x130);
  }
  lVar2 = DAT_09187730;
  if (((uint)uVar6 <= (uint)bVar1) &&
     (*(long *)(*(long *)(lVar5 + 200) + uVar6 * 8 + -8) == DAT_09187730)) {
    *(long **)(param_1 + 0x68) = param_2;
    if (((uint)uVar6 <= (uint)*(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + uVar6 * 8 + -8) == lVar2)) {
LAB_07488938:
      thunk_FUN_03f5d7b8(param_1 + 0x68,param_2);
      if (*(int *)(DAT_09187870 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_Remoting_Lifetime_LifetimeServices__TrackLifetime(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0(param_2);
}

