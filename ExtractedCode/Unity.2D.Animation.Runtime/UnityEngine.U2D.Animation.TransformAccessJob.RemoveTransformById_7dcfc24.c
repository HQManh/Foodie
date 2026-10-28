// rea decompile_all
// name: UnityEngine.U2D.Animation.TransformAccessJob$$RemoveTransformById
// address: 0x7dcfc24
// body: available
// range: 0x7dcfc24-0x7dcfe13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dcfe10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UnityEngine_U2D_Animation_TransformAccessJob__RemoveTransformById
               (long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_38;
  
  if ((DAT_0952620a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c04c8);
    FUN_03f5c2a4(&DAT_091b59e0);
    FUN_03f5c2a4(&DAT_091b59f0);
    FUN_03f5c2a4(&DAT_091b5a00);
    FUN_03f5c2a4(&DAT_091b5a10);
    FUN_03f5c2a4(&DAT_0917e0c8);
    FUN_03f5c2a4(&DAT_091dbb48);
    FUN_03f5c2a4(&DAT_091f0ee8);
    FUN_03f5c2a4(&DAT_091951f8);
    DAT_0952620a = 1;
  }
  local_38 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_091951f8);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x10) = param_2;
    puVar5 = (undefined8 *)(param_1 + 0x20);
    plVar7 = (long *)*puVar5;
    if (plVar7 != (long *)0x0) {
      if ((*(ushort *)(*(long *)(DAT_091b5a00 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if (*plVar7 != 0) {
        Unity_Jobs_JobHandle__Complete(param_1 + 0x50,0);
        uVar3 = FUN_05b64cd0(puVar5,*(undefined4 *)(lVar2 + 0x10),&local_38,DAT_091b59f0);
        if ((uVar3 & 1) != 0) {
          if (local_38._4_4_ + -1 == 0) {
            FUN_05b64c80(puVar5,*(undefined4 *)(lVar2 + 0x10),DAT_091b59e0);
            uVar6 = *(undefined8 *)(param_1 + 0x10);
            uVar4 = thunk_FUN_03f9944c(DAT_0917e0c8);
            FUN_05d78cfc(uVar4,lVar2,DAT_091f0ee8,0);
            iVar1 = FUN_04ee44c0(uVar6,uVar4,DAT_091c04c8);
            if (-1 < iVar1) {
              FUN_04d8c5c0((undefined8 *)(param_1 + 0x10),iVar1,DAT_091dbb48);
            }
            *(undefined1 *)(param_1 + 0x48) = 1;
          }
          else {
            local_38 = CONCAT44(local_38._4_4_ + -1,(undefined4)local_38);
            FUN_05b64df4(puVar5,*(undefined4 *)(lVar2 + 0x10),local_38,DAT_091b5a10);
          }
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

