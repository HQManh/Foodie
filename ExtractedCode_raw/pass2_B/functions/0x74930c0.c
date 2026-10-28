// rea decompile_all
// name: System.Runtime.Remoting.Contexts.Context$$CreateServerObjectSinkChain
// address: 0x74930c0
// body: available
// range: 0x74930c0-0x7493283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7493280 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Runtime_Remoting_Contexts_Context__CreateServerObjectSinkChain
               (long param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  
  if ((DAT_0952131a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091858b0);
    FUN_03f5c2a4(&DAT_09187740);
    FUN_03f5c2a4(&DAT_091ad128);
    FUN_03f5c2a4(&DAT_091ad130);
    FUN_03f5c2a4(&DAT_0918a9e8);
    FUN_03f5c2a4(&DAT_0918b0f0);
    DAT_0952131a = 1;
  }
  uVar2 = thunk_FUN_03f9944c(DAT_0918b0f0);
  System_Runtime_Remoting_Messaging_StackBuilderSink___ctor(uVar2,param_2,param_3 & 1);
  lVar3 = thunk_FUN_03f9944c(DAT_0918a9e8);
  System_Object___ctor(lVar3,0);
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),uVar2);
  lVar4 = thunk_FUN_03f9944c(DAT_09187740);
  System_Object___ctor(lVar4,0);
  *(long *)(lVar4 + 0x10) = lVar3;
  thunk_FUN_03f5d7b8((long *)(lVar4 + 0x10),lVar3);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (iVar9 = *(int *)(*(long *)(param_1 + 0x38) + 0x18) + -1, -1 < iVar9)) {
    do {
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = FUN_057e0998(*(long *)(param_1 + 0x38),iVar9,DAT_091ad130);
      plVar5 = (long *)thunk_FUN_03f99350(uVar2,DAT_091858b0);
      if (plVar5 != (long *)0x0) {
        lVar3 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091858b0) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_07493244;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091858b0,0);
LAB_07493244:
        lVar4 = (*(code *)*puVar6)(plVar5,param_2,lVar4,puVar6[1]);
      }
      bVar1 = 0 < iVar9;
      iVar9 = iVar9 + -1;
    } while (bVar1);
  }
  return lVar4;
}

