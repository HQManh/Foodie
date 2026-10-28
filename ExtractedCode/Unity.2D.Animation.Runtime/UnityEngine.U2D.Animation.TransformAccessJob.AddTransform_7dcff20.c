// rea decompile_all
// name: UnityEngine.U2D.Animation.TransformAccessJob$$AddTransform
// address: 0x7dcff20
// body: available
// range: 0x7dcff20-0x7dd00cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dd0078 to 0x5b64df4 FUN_05b64df4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7dd00c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UnityEngine_U2D_Animation_TransformAccessJob__AddTransform(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if ((DAT_09526203 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b59d0);
    FUN_03f5c2a4(&DAT_091b59e8);
    FUN_03f5c2a4(&DAT_091b5a00);
    FUN_03f5c2a4(&DAT_091b5a08);
    FUN_03f5c2a4(&DAT_091b5a10);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbb40);
    DAT_09526203 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar2 & 1) == 0) {
    puVar4 = (undefined8 *)(param_1 + 0x20);
    plVar5 = (long *)*puVar4;
    if (plVar5 != (long *)0x0) {
      if ((*(ushort *)(*(long *)(DAT_091b5a00 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if (*plVar5 != 0) {
        Unity_Jobs_JobHandle__Complete(param_1 + 0x50,0);
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = UnityEngine_Object__GetInstanceID(param_2,0);
        uVar2 = FUN_05b64d1c(puVar4,uVar1,DAT_091b59d0);
        if ((uVar2 & 1) != 0) {
          lVar3 = FUN_05b64da0(puVar4,uVar1,DAT_091b5a08);
          FUN_05b64df4(puVar4,uVar1,lVar3 + 0x100000000,DAT_091b5a10);
          return;
        }
        FUN_05b64b40(puVar4,uVar1,0x1ffffffff,DAT_091b59e8);
        FUN_04d8c3c4(param_1 + 0x10,param_2,DAT_091dbb40);
        *(undefined1 *)(param_1 + 0x48) = 1;
      }
    }
  }
  return;
}

