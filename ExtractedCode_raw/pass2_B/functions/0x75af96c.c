// rea decompile_all
// name: System.Guid$$CompareTo
// address: 0x75af96c
// body: available
// range: 0x75af96c-0x75afafb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75afaf8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 System_Guid__CompareTo(uint *param_1,long *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort uVar8;
  
  if ((DAT_09521ca6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184f30);
    DAT_09521ca6 = 1;
  }
  if (param_2 == (long *)0x0) {
    uVar2 = 1;
  }
  else {
    if (*param_2 != DAT_09184f30) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_09209498);
      uVar6 = thunk_FUN_03fc39d4(&DAT_09225370);
      System_ArgumentException___ctor(uVar4,uVar5,uVar6,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091ce488);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    puVar3 = (uint *)thunk_FUN_03f99594(param_2);
    if (*puVar3 == *param_1) {
      uVar7 = (ushort)puVar3[1];
      uVar8 = (ushort)param_1[1];
      if (uVar7 == uVar8) {
        uVar7 = *(ushort *)((long)puVar3 + 6);
        uVar8 = *(ushort *)((long)param_1 + 6);
        if (uVar7 == uVar8) {
          uVar7 = (ushort)(byte)puVar3[2];
          uVar8 = (ushort)(byte)param_1[2];
          if ((byte)puVar3[2] == (byte)param_1[2]) {
            uVar7 = (ushort)*(byte *)((long)puVar3 + 9);
            uVar8 = (ushort)*(byte *)((long)param_1 + 9);
            if (*(byte *)((long)puVar3 + 9) == *(byte *)((long)param_1 + 9)) {
              uVar7 = (ushort)*(byte *)((long)puVar3 + 10);
              uVar8 = (ushort)*(byte *)((long)param_1 + 10);
              if (*(byte *)((long)puVar3 + 10) == *(byte *)((long)param_1 + 10)) {
                uVar7 = (ushort)*(byte *)((long)puVar3 + 0xb);
                uVar8 = (ushort)*(byte *)((long)param_1 + 0xb);
                if (*(byte *)((long)puVar3 + 0xb) == *(byte *)((long)param_1 + 0xb)) {
                  uVar7 = (ushort)(byte)puVar3[3];
                  uVar8 = (ushort)(byte)param_1[3];
                  if ((byte)puVar3[3] == (byte)param_1[3]) {
                    uVar7 = (ushort)*(byte *)((long)puVar3 + 0xd);
                    uVar8 = (ushort)*(byte *)((long)param_1 + 0xd);
                    if (*(byte *)((long)puVar3 + 0xd) == *(byte *)((long)param_1 + 0xd)) {
                      uVar7 = (ushort)*(byte *)((long)puVar3 + 0xe);
                      uVar8 = (ushort)*(byte *)((long)param_1 + 0xe);
                      if (*(byte *)((long)puVar3 + 0xe) == *(byte *)((long)param_1 + 0xe)) {
                        uVar7 = (ushort)*(byte *)((long)puVar3 + 0xf);
                        uVar8 = (ushort)*(byte *)((long)param_1 + 0xf);
                        if (*(byte *)((long)puVar3 + 0xf) == *(byte *)((long)param_1 + 0xf)) {
                          return 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      bVar1 = uVar7 <= uVar8;
    }
    else {
      bVar1 = *puVar3 <= *param_1;
    }
    uVar2 = 1;
    if (!bVar1) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

