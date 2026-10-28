// rea decompile_all
// name: System.IO.MemoryStream$$ReadAsync
// address: 0x75684e8
// body: available
// range: 0x75684e8-0x7568773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7568770 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_IO_MemoryStream__ReadAsync
               (long *param_1,long param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_38;
  
  local_38 = param_5;
  if ((DAT_095219f8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091bcc80);
    FUN_03f5c2a4(&DAT_091dad80);
    FUN_03f5c2a4(&DAT_091dae18);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095219f8 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_092185d8);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091fcf10);
    System_ArgumentNullException___ctor(uVar7,uVar8,uVar6,0);
  }
  else {
    if (param_3 < 0) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar7 = thunk_FUN_03f9944c();
      puVar5 = &DAT_092202d8;
    }
    else {
      if (-1 < param_4) {
        if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
          if (*(int *)(DAT_09182348 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_38,0);
          uVar8 = local_38;
          if ((uVar3 & 1) == 0) {
            iVar1 = (**(code **)(*param_1 + 0x368))
                              (param_1,param_2,param_3,param_4,*(undefined8 *)(*param_1 + 0x370));
            param_1 = param_1 + 9;
            lVar4 = *param_1;
            if ((lVar4 == 0) || (iVar2 = FUN_062eb994(lVar4,DAT_091bcc80), iVar2 != iVar1)) {
              if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar4 = FUN_04d823b8(iVar1,DAT_091dae18);
              *param_1 = lVar4;
              thunk_FUN_03f5d7b8(param_1,lVar4);
            }
          }
          else {
            if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar4 = FUN_04d7635c(uVar8,DAT_091dad80);
          }
          return lVar4;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar7 = thunk_FUN_03f9944c();
        uVar8 = thunk_FUN_03fc39d4(&DAT_09209710);
        System_ArgumentException___ctor(uVar7,uVar8,0);
        goto LAB_0756875c;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar7 = thunk_FUN_03f9944c();
      puVar5 = &DAT_09219b28;
    }
    uVar8 = thunk_FUN_03fc39d4(puVar5);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar7,uVar8,uVar6,0);
  }
LAB_0756875c:
  uVar8 = thunk_FUN_03fc39d4(&DAT_091d30b0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar8);
}

